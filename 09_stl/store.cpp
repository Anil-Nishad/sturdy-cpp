#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <array>
#include <tuple>
#include <functional>
#include <memory>
#include <utility>
#include <ctime>
#include <deque>

using namespace std;

struct Product {
    int product_id;
    string product_name;
    double product_price;
    int product_quantity;
    string category;
};

struct Order {
    int order_id;
    int product_id;
    int quantity;
    double total_price;
    string customer_id;
    time_t order_date;
    string order_status;
};

int main() {
    vector<Product> products ={
        {1, "Laptop", 999.99, 10, "Electronics"},
        {2, "Smartphone", 499.99, 20, "Electronics"},
        {3, "Tablet", 299.99, 15, "Electronics"},
        {4, "Headphones", 199.99, 30, "Accessories"},
        {5, "Smartwatch", 249.99, 25, "Electronics"},
        {6, "Charger", 29.99, 50, "Accessories"},
        {7, "Mouse", 49.99, 40, "Accessories"},
        {8, "Keyboard", 79.99, 35, "Accessories"},
        {9, "Monitor", 199.99, 20, "Electronics"},
        {10, "Printer", 149.99, 15, "Electronics"}
    };
    deque<string> recentCustomers = {"Alice", "Bob", "Charlie", "David", "Eve"};
    recentCustomers.push_front("Frank");
    recentCustomers.push_back("Grace");
    //recentCustomers.pop_back();
    list<Order> orderHistory;
    orderHistory.push_back({1, 1, 1, 999.99, "Alice", time(0), "Completed"});
    orderHistory.push_back({2, 2, 2, 999.98, "Bob", time(0), "Pending"});
    orderHistory.push_back({3, 3, 3, 899.97, "Charlie", time(0), "Completed"});
    orderHistory.push_back({4, 4, 4, 799.96, "David", time(0), "Cancelled"});
    orderHistory.push_back({5, 5, 5, 1249.95, "Eve", time(0), "Completed"});
    orderHistory.push_back({6, 6, 6, 179.94, "Frank", time(0), "Pending"});
    orderHistory.push_back({7, 7, 7, 199.98, "Grace", time(0), "Completed"});

    set<string> categories;
    for (const auto& product : products) {
        categories.insert(product.category);
    }

    map<int, int> productStock;
    for (const auto& product : products) {
        productStock[product.product_id] = product.product_quantity;
    }
     //or
        //map<int, int> productStock = {
        //    {1, 10},
        //    {2, 20},
        //    {3, 15},
        //    {4, 30},
        //    {5, 25},
        //   };

        multimap<string, Order> customerOrders;
        for (const auto& order : orderHistory) {
        customerOrders.insert({order.customer_id, order});

        unordered_map<string, string> customerDetails;
        customerDetails["Alice"] = "123 Main St, Cityville";
        customerDetails["Bob"] = "456 Elm St, Townsville";
        customerDetails["Charlie"] = "789 Oak St, Villageburg";
        customerDetails["David"] = "101 Maple St, Hamletville";
        customerDetails["Eve"] = "202 Birch St, Citytown";
        customerDetails["Frank"] = "303 Pine St, Towncity";
        customerDetails["Grace"] = "404 Cedar St, Cityplace";
        
        //or
        //unordered_map<string, string> customerDetails = {
        //    {"Alice", "123 Main St, Cityville"},
        //    {"Bob", "456 Elm St, Townsville"},
        //  };

        unordered_set<string> uniqueProductIds;
        for (const auto& product : products) {
            uniqueProductIds.insert(to_string(product.product_id));
        }
    }
}