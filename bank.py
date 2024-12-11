././class Bank:
    def __init__(self) -> None:
        self.all_acc= {}

    def create_acc(self, acc_no, balance):
        if acc_no in self.all_acc.keys():
            print("Account already exists.")
        else:
            self.all_acc[acc_no]=balance

    def check_balance(self,acc_no):
        if acc_no in self.all_acc.keys():
            print(f'your balance is: {self.all_acc[acc_no]}')
        else:
            print('no account exists create one kindly broooo')


    def deposit(self, acc_no, balance):
        if acc_no in self.all_acc.keys():
            self.all_acc[acc_no] += balance
            print(f'{self.all_acc[acc_no]} Balance deposited')
        else:
            print('No account exists. Please create your account')

    def withdraw(self, acc_no, balance):
        if acc_no in self.all_acc.keys():
            if self.all_acc[acc_no]<=balance:
                self.all_acc[acc_no]-=balance
                print(f'{self.all_acc[acc_no]} Balance withdrawn')    

            else:
                print('NO account exists please create one.')

new_obj=Bank()
new_obj.create_acc(1111,10000)
new_obj.check_balance(1111)
new_obj.deposit(1111,100)
new_obj.withdraw(1111,200)

            