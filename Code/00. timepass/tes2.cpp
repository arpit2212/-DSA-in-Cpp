
long getMaximumAmount(vector<int> quantity, int m) {
    // Create a copy of the quantity array to work with
    vector<int> items = quantity;
    long totalRevenue = 0;
    
    // We need to serve m customers
    for (int customer = 0; customer < m; customer++) {
        // Find the item type that would generate the maximum revenue at this point
        int maxRevenue = 0;
        int bestItemType = -1;
        
        for (int i = 0; i < items.size(); i++) {
            // If we still have items of this type
            if (items[i] > 0) {
                // Revenue for selling this item = current quantity
                int revenue = items[i];
                
                if (revenue > maxRevenue) {
                    maxRevenue = revenue;
                    bestItemType = i;
                }
            }
        }
        
        // If we found a valid item to sell
        if (bestItemType != -1) {
            // Add revenue from this sale
            totalRevenue += items[bestItemType];
            
            // Decrease the quantity of the sold item type
            items[bestItemType]--;
        } else {
            // No more items to sell
            break;
        }
    }
    
    return totalRevenue;
}