class Shopping:
    def __init__(self,name):
        self.name=name
        self.cart=[]

    def add_to_cart(self,item,price,quantity):
        product={'item': item, 'price':price, 'quantity':quantity}
        self.cart.append(product)
    # hw
    def remove_item(self,r_item):
        for item in self.cart:
            if item['item']==r_item:
                self.cart.remove(item)
                print(f"{r_item} removed from the cart.")
                # return
            else:
                print(f"{r_item} not found in the cart.")

    def checkout(self,amount):
        total=0
        for item in self.cart:
            # print(item)
            total+=item['price'] * item['quantity']
        print('total price', total)
        if amount<total:
            print(f'please give {total-amount} more')
        else:
            extra=amount-total
            print(f'Here is your extra money: {extra}')

swapan = Shopping('Alan Swapon')
swapan.add_to_cart('alu', 50, 6)
swapan.add_to_cart('dim', 12, 24)
swapan.add_to_cart('rice', 50, 5)   

print(swapan.cart)
# swapan.checkout(600)
# swapan.checkout(1700)
swapan.remove_item('alu')
print(swapan.cart)