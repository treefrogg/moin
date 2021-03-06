#ifndef BRIDGETRANSLATIONS_H
#define BRIDGETRANSLATIONS_H
#include <QObject>

// Get strings in debug console `dumpStrings()`
// TODO: Automate this process, move into include and generate include...
static const char *html_strings[] = {
QT_TRANSLATE_NOOP("MoinBridge", "Overview"),
QT_TRANSLATE_NOOP("MoinBridge", "Wallet"),
QT_TRANSLATE_NOOP("MoinBridge", "Send"),
QT_TRANSLATE_NOOP("MoinBridge", "Receive"),
QT_TRANSLATE_NOOP("MoinBridge", "Transactions"),
QT_TRANSLATE_NOOP("MoinBridge", "Address Book"),
QT_TRANSLATE_NOOP("MoinBridge", "Chat"),
QT_TRANSLATE_NOOP("MoinBridge", "Notifications"),
QT_TRANSLATE_NOOP("MoinBridge", "Options"),
QT_TRANSLATE_NOOP("MoinBridge", "Wallet Management"),
QT_TRANSLATE_NOOP("MoinBridge", "Add New Wallet"),
QT_TRANSLATE_NOOP("MoinBridge", "Import Wallet"),
QT_TRANSLATE_NOOP("MoinBridge", "Advanced"),
QT_TRANSLATE_NOOP("MoinBridge", "Backup"),
QT_TRANSLATE_NOOP("MoinBridge", "Backup Wallet"),
QT_TRANSLATE_NOOP("MoinBridge", "Encrypt Wallet"),
QT_TRANSLATE_NOOP("MoinBridge", "Change Passphrase"),
QT_TRANSLATE_NOOP("MoinBridge", "(Un)lock Wallet"),
QT_TRANSLATE_NOOP("MoinBridge", "Tools"),
QT_TRANSLATE_NOOP("MoinBridge", "Chain Data"),
QT_TRANSLATE_NOOP("MoinBridge", "Block Explorer"),
QT_TRANSLATE_NOOP("MoinBridge", "Sign Message"),
QT_TRANSLATE_NOOP("MoinBridge", "Verify Message"),
QT_TRANSLATE_NOOP("MoinBridge", "Debug"),
QT_TRANSLATE_NOOP("MoinBridge", "About Moin"),
QT_TRANSLATE_NOOP("MoinBridge", "About QT"),
QT_TRANSLATE_NOOP("MoinBridge", "QR code"),
QT_TRANSLATE_NOOP("MoinBridge", "Address:"),
QT_TRANSLATE_NOOP("MoinBridge", "Label:"),
QT_TRANSLATE_NOOP("MoinBridge", "Narration:"),
QT_TRANSLATE_NOOP("MoinBridge", "Amount:"),
QT_TRANSLATE_NOOP("MoinBridge", "MOIN"),
QT_TRANSLATE_NOOP("MoinBridge", "mMOIN"),
QT_TRANSLATE_NOOP("MoinBridge", "µMOIN"),
QT_TRANSLATE_NOOP("MoinBridge", "Moinlet"),
QT_TRANSLATE_NOOP("MoinBridge", "Add new receive address"),
QT_TRANSLATE_NOOP("MoinBridge", "Normal"),
QT_TRANSLATE_NOOP("MoinBridge", "Stealth"),
QT_TRANSLATE_NOOP("MoinBridge", "BIP32"),
QT_TRANSLATE_NOOP("MoinBridge", "Add Address"),
QT_TRANSLATE_NOOP("MoinBridge", "Add a new contact"),
QT_TRANSLATE_NOOP("MoinBridge", "Address Lookup"),
QT_TRANSLATE_NOOP("MoinBridge", "Address Type"),
QT_TRANSLATE_NOOP("MoinBridge", "Group"),
QT_TRANSLATE_NOOP("MoinBridge", "Label"),
QT_TRANSLATE_NOOP("MoinBridge", "Address"),
QT_TRANSLATE_NOOP("MoinBridge", "Public Key"),
QT_TRANSLATE_NOOP("MoinBridge", "Transaction Hash"),
QT_TRANSLATE_NOOP("MoinBridge", "Recent Transactions"),
QT_TRANSLATE_NOOP("MoinBridge", "Market"),
QT_TRANSLATE_NOOP("MoinBridge", "Advanced Options"),
QT_TRANSLATE_NOOP("MoinBridge", "Coin Control"),
QT_TRANSLATE_NOOP("MoinBridge", "Make payment"),
QT_TRANSLATE_NOOP("MoinBridge", "Balance transfer"),
QT_TRANSLATE_NOOP("MoinBridge", "Select Inputs"),
QT_TRANSLATE_NOOP("MoinBridge", "Automatically selected"),
QT_TRANSLATE_NOOP("MoinBridge", "Quantity:"),
QT_TRANSLATE_NOOP("MoinBridge", "Fee:"),
QT_TRANSLATE_NOOP("MoinBridge", "After Fee:"),
QT_TRANSLATE_NOOP("MoinBridge", "Bytes:"),
QT_TRANSLATE_NOOP("MoinBridge", "Priority:"),
QT_TRANSLATE_NOOP("MoinBridge", "LowOutput:"),
QT_TRANSLATE_NOOP("MoinBridge", "Change:"),
QT_TRANSLATE_NOOP("MoinBridge", "Custom change address"),
QT_TRANSLATE_NOOP("MoinBridge", "From account"),
QT_TRANSLATE_NOOP("MoinBridge", "PUBLIC"),
QT_TRANSLATE_NOOP("MoinBridge", "PRIVATE"),
QT_TRANSLATE_NOOP("MoinBridge", "Balance:"),
QT_TRANSLATE_NOOP("MoinBridge", "Ring Size:"),
QT_TRANSLATE_NOOP("MoinBridge", "To account"),
QT_TRANSLATE_NOOP("MoinBridge", "Pay to"),
QT_TRANSLATE_NOOP("MoinBridge", "Narration"),
QT_TRANSLATE_NOOP("MoinBridge", "Amount"),
QT_TRANSLATE_NOOP("MoinBridge", "Default Stealth Address"),
QT_TRANSLATE_NOOP("MoinBridge", "Add Recipient"),
QT_TRANSLATE_NOOP("MoinBridge", "Clear All"),
QT_TRANSLATE_NOOP("MoinBridge", "Suggest Ring Size"),
QT_TRANSLATE_NOOP("MoinBridge", "Send Payment"),
QT_TRANSLATE_NOOP("MoinBridge", "RECEIVE"),
QT_TRANSLATE_NOOP("MoinBridge", "Filter by type.."),
QT_TRANSLATE_NOOP("MoinBridge", "Type"),
QT_TRANSLATE_NOOP("MoinBridge", "Show QR Code"),
QT_TRANSLATE_NOOP("MoinBridge", "New Address"),
QT_TRANSLATE_NOOP("MoinBridge", "Copy Address"),
QT_TRANSLATE_NOOP("MoinBridge", "TRANSACTIONS"),
QT_TRANSLATE_NOOP("MoinBridge", "Date"),
QT_TRANSLATE_NOOP("MoinBridge", "ADDRESSBOOK"),
QT_TRANSLATE_NOOP("MoinBridge", "Delete"),
QT_TRANSLATE_NOOP("MoinBridge", "Start Private Conversation"),
QT_TRANSLATE_NOOP("MoinBridge", "Name:"),
QT_TRANSLATE_NOOP("MoinBridge", "Public Key:"),
QT_TRANSLATE_NOOP("MoinBridge", "Start Conversation"),
QT_TRANSLATE_NOOP("MoinBridge", "Choose identity"),
QT_TRANSLATE_NOOP("MoinBridge", "Identity:"),
QT_TRANSLATE_NOOP("MoinBridge", "Start Group Conversation"),
QT_TRANSLATE_NOOP("MoinBridge", "Group name:"),
QT_TRANSLATE_NOOP("MoinBridge", "Create Group"),
QT_TRANSLATE_NOOP("MoinBridge", "Invite others"),
QT_TRANSLATE_NOOP("MoinBridge", "Search"),
QT_TRANSLATE_NOOP("MoinBridge", "Invite others to group"),
QT_TRANSLATE_NOOP("MoinBridge", "Invite to Group"),
QT_TRANSLATE_NOOP("MoinBridge", "Invite"),
QT_TRANSLATE_NOOP("MoinBridge", "GROUP"),
QT_TRANSLATE_NOOP("MoinBridge", "BOOK"),
QT_TRANSLATE_NOOP("MoinBridge", "Start private conversation"),
QT_TRANSLATE_NOOP("MoinBridge", "Start group conversation"),
QT_TRANSLATE_NOOP("MoinBridge", "CHAT"),
QT_TRANSLATE_NOOP("MoinBridge", "Leave Group"),
QT_TRANSLATE_NOOP("MoinBridge", "CHAIN DATA"),
QT_TRANSLATE_NOOP("MoinBridge", "Coin Value"),
QT_TRANSLATE_NOOP("MoinBridge", "Owned (Mature)"),
QT_TRANSLATE_NOOP("MoinBridge", "System (Mature)"),
QT_TRANSLATE_NOOP("MoinBridge", "Spends"),
QT_TRANSLATE_NOOP("MoinBridge", "Least Depth"),
QT_TRANSLATE_NOOP("MoinBridge", "BLOCK EXPLORER"),
QT_TRANSLATE_NOOP("MoinBridge", "Refresh"),
QT_TRANSLATE_NOOP("MoinBridge", "Hash"),
QT_TRANSLATE_NOOP("MoinBridge", "Height"),
QT_TRANSLATE_NOOP("MoinBridge", "Timestamp"),
QT_TRANSLATE_NOOP("MoinBridge", "Value Out"),
QT_TRANSLATE_NOOP("MoinBridge", "OPTIONS"),
QT_TRANSLATE_NOOP("MoinBridge", "Main"),
QT_TRANSLATE_NOOP("MoinBridge", "Network"),
QT_TRANSLATE_NOOP("MoinBridge", "Window"),
QT_TRANSLATE_NOOP("MoinBridge", "Display"),
QT_TRANSLATE_NOOP("MoinBridge", "I2P"),
QT_TRANSLATE_NOOP("MoinBridge", "Tor"),
QT_TRANSLATE_NOOP("MoinBridge", "Start Moin on system login"),
QT_TRANSLATE_NOOP("MoinBridge", "Detach databases at shutdown"),
QT_TRANSLATE_NOOP("MoinBridge", "Pay transaction fee:"),
QT_TRANSLATE_NOOP("MoinBridge", "Optional transaction fee per kB that helps make sure your transactions are processed quickly."),
QT_TRANSLATE_NOOP("MoinBridge", "Most transactions are 1kB. Fee 0.01 recommended."),
QT_TRANSLATE_NOOP("MoinBridge", "Enable Staking"),
QT_TRANSLATE_NOOP("MoinBridge", "Reserve:"),
QT_TRANSLATE_NOOP("MoinBridge", "Reserved amount does not participate in staking and is therefore spendable at any time."),
QT_TRANSLATE_NOOP("MoinBridge", "Minimum Stake Interval"),
QT_TRANSLATE_NOOP("MoinBridge", "Minimum Ring size:"),
QT_TRANSLATE_NOOP("MoinBridge", "Maximum Ring size:"),
QT_TRANSLATE_NOOP("MoinBridge", "Automatically select ring size"),
QT_TRANSLATE_NOOP("MoinBridge", "Enable Secure messaging"),
QT_TRANSLATE_NOOP("MoinBridge", "Thin Mode (Requires Restart)"),
QT_TRANSLATE_NOOP("MoinBridge", "Thin Full Index"),
QT_TRANSLATE_NOOP("MoinBridge", "Thin Index Window"),
QT_TRANSLATE_NOOP("MoinBridge", "Map port using UPnP"),
QT_TRANSLATE_NOOP("MoinBridge", "Connect through SOCKS proxy:"),
QT_TRANSLATE_NOOP("MoinBridge", "Details"),
QT_TRANSLATE_NOOP("MoinBridge", "Proxy IP:"),
QT_TRANSLATE_NOOP("MoinBridge", "Port:"),
QT_TRANSLATE_NOOP("MoinBridge", "SOCKS Version:"),
QT_TRANSLATE_NOOP("MoinBridge", "Minimize to the tray instead of the taskbar"),
QT_TRANSLATE_NOOP("MoinBridge", "Minimize on close"),
QT_TRANSLATE_NOOP("MoinBridge", "User Interface language:"),
QT_TRANSLATE_NOOP("MoinBridge", "Unit to show amounts in:"),
QT_TRANSLATE_NOOP("MoinBridge", "Rows per page:"),
QT_TRANSLATE_NOOP("MoinBridge", "Display addresses in transaction list"),
QT_TRANSLATE_NOOP("MoinBridge", "Notifications:"),
QT_TRANSLATE_NOOP("MoinBridge", "Visible Transaction Types:"),
QT_TRANSLATE_NOOP("MoinBridge", "I2P (coming soon)"),
QT_TRANSLATE_NOOP("MoinBridge", "TOR (coming soon)"),
QT_TRANSLATE_NOOP("MoinBridge", "Cancel"),
QT_TRANSLATE_NOOP("MoinBridge", "Apply"),
QT_TRANSLATE_NOOP("MoinBridge", "Ok"),
QT_TRANSLATE_NOOP("MoinBridge", "Lets create a New Wallet and Account to get you started!"),
QT_TRANSLATE_NOOP("MoinBridge", "Wallet Name"),
QT_TRANSLATE_NOOP("MoinBridge", "Password"),
QT_TRANSLATE_NOOP("MoinBridge", "Add an optional Password to secure the Recovery Phrase (shown on next page)"),
QT_TRANSLATE_NOOP("MoinBridge", "Would you like to create a Multi-Account HD Key? (BIP44)"),
QT_TRANSLATE_NOOP("MoinBridge", "Language"),
QT_TRANSLATE_NOOP("MoinBridge", "English"),
QT_TRANSLATE_NOOP("MoinBridge", "French"),
QT_TRANSLATE_NOOP("MoinBridge", "Japanese"),
QT_TRANSLATE_NOOP("MoinBridge", "Spanish"),
QT_TRANSLATE_NOOP("MoinBridge", "Chinese (Simplified)"),
QT_TRANSLATE_NOOP("MoinBridge", "Chinese (Traditional)"),
QT_TRANSLATE_NOOP("MoinBridge", "Next Step"),
QT_TRANSLATE_NOOP("MoinBridge", "Write your Wallet Recovery Phrase"),
QT_TRANSLATE_NOOP("MoinBridge", "Recovery Phrase"),
QT_TRANSLATE_NOOP("MoinBridge", "Important!"),
QT_TRANSLATE_NOOP("MoinBridge", "You need the Wallet Recovery Phrase to restore this wallet. Write it down and keep them somewhere safe.\n\
                                                          You will be asked to confirm the Wallet Recovery Phrase in the next screen to ensure you have written it down correctly"),
QT_TRANSLATE_NOOP("MoinBridge", "Back"),
QT_TRANSLATE_NOOP("MoinBridge", "Please confirm your Wallet Recovery Phrase"),
QT_TRANSLATE_NOOP("MoinBridge", "Congratulations! You have successfully created a New Wallet and Account"),
QT_TRANSLATE_NOOP("MoinBridge", "You can now use your Account to send and receive funds :)\n\
                            Remember to keep your Wallet Recovery Phrase and Password (if set) safe in case you ever need to recover your wallet"),
QT_TRANSLATE_NOOP("MoinBridge", "Lets import your Wallet"),
QT_TRANSLATE_NOOP("MoinBridge", "The Wallet Recovery Phrase could require a password to be imported"),
QT_TRANSLATE_NOOP("MoinBridge", "Is this a Multi-Account HD Key (BIP44)"),
QT_TRANSLATE_NOOP("MoinBridge", "Recovery Phrase (Usually 24 words)"),
QT_TRANSLATE_NOOP("MoinBridge", "Congratulations! You have successfully imported your Wallet from your Recovery Phrase"),
QT_TRANSLATE_NOOP("MoinBridge", "You can now use your Account to send and receive funds :)\n\
                            Remember to keep your Wallet Recovery Phrase and Password safe in case you ever need to recover your wallet again!"),
QT_TRANSLATE_NOOP("MoinBridge", "Accounts"),
QT_TRANSLATE_NOOP("MoinBridge", "ID"),
QT_TRANSLATE_NOOP("MoinBridge", "Name"),
QT_TRANSLATE_NOOP("MoinBridge", "Created"),
QT_TRANSLATE_NOOP("MoinBridge", "Active Account"),
QT_TRANSLATE_NOOP("MoinBridge", "Default"),
QT_TRANSLATE_NOOP("MoinBridge", "Wallet Keys"),
QT_TRANSLATE_NOOP("MoinBridge", "Path"),
QT_TRANSLATE_NOOP("MoinBridge", "Active"),
QT_TRANSLATE_NOOP("MoinBridge", "Master"),
QT_TRANSLATE_NOOP("MoinBridge", "Make Default"),
QT_TRANSLATE_NOOP("MoinBridge", "Activate/Deactivate"),
QT_TRANSLATE_NOOP("MoinBridge", "Set as Master"),
QT_TRANSLATE_NOOP("MoinBridge", "Tor connection offline"),
QT_TRANSLATE_NOOP("MoinBridge", "i2p connection offline"),
QT_TRANSLATE_NOOP("MoinBridge", "Wallet is encrypted and currently locked"),
QT_TRANSLATE_NOOP("MoinBridge", "Not staking because wallet is offline"),
QT_TRANSLATE_NOOP("MoinBridge", "0 active connections to MoinCoin network"),
QT_TRANSLATE_NOOP("MoinBridge", "Wallet is syncing"),
QT_TRANSLATE_NOOP("MoinBridge", "Open chat list"),
QT_TRANSLATE_NOOP("MoinBridge", "Enter a label for this address to add it to your address book"),
QT_TRANSLATE_NOOP("MoinBridge", "Enter a address to add it to your address book"),
QT_TRANSLATE_NOOP("MoinBridge", "Inputs"),
QT_TRANSLATE_NOOP("MoinBridge", "Values"),
QT_TRANSLATE_NOOP("MoinBridge", "Outputs"),
QT_TRANSLATE_NOOP("MoinBridge", "Enter a MoinCash address to sign the message with (e.g. SaKYqfD8J3vw4RTnqtgk2K9B67CBaL3mhV)"),
QT_TRANSLATE_NOOP("MoinBridge", "Enter the message you want to sign"),
QT_TRANSLATE_NOOP("MoinBridge", "Click sign message to generate signature"),
QT_TRANSLATE_NOOP("MoinBridge", "Copy the signed message signature"),
QT_TRANSLATE_NOOP("MoinBridge", "Enter a MoinCash address to verify the message with (e.g. SaKYqfD8J3vw4RTnqtgk2K9B67CBaL3mhV)"),
QT_TRANSLATE_NOOP("MoinBridge", "Enter the message you want to verify"),
QT_TRANSLATE_NOOP("MoinBridge", "Enter a MoinCash signature"),
QT_TRANSLATE_NOOP("MoinBridge", "Paste signature from clipboard"),
QT_TRANSLATE_NOOP("MoinBridge", "Your total balance"),
QT_TRANSLATE_NOOP("MoinBridge", "Balances overview"),
QT_TRANSLATE_NOOP("MoinBridge", "Recent in/out transactions or stakes"),
QT_TRANSLATE_NOOP("MoinBridge", "Select inputs to spend"),
QT_TRANSLATE_NOOP("MoinBridge", "Optional address to receive transaction change"),
QT_TRANSLATE_NOOP("MoinBridge", "Choose from address book"),
QT_TRANSLATE_NOOP("MoinBridge", "Paste address from clipboard"),
QT_TRANSLATE_NOOP("MoinBridge", "Remove this recipient"),
QT_TRANSLATE_NOOP("MoinBridge", "Current spendable send payment balance"),
QT_TRANSLATE_NOOP("MoinBridge", "Current spendable balance to account"),
QT_TRANSLATE_NOOP("MoinBridge", "The address to send the payment to"),
QT_TRANSLATE_NOOP("MoinBridge", "Enter a label for this address"),
QT_TRANSLATE_NOOP("MoinBridge", "Enter a short note to send with payment (max 24 characters)"),
QT_TRANSLATE_NOOP("MoinBridge", "The address to transfer the balance to"),
QT_TRANSLATE_NOOP("MoinBridge", "The label for this address"),
QT_TRANSLATE_NOOP("MoinBridge", "Amount to transfer"),
QT_TRANSLATE_NOOP("MoinBridge", "Send to multiple recipients at once"),
QT_TRANSLATE_NOOP("MoinBridge", "Double click to edit"),
QT_TRANSLATE_NOOP("MoinBridge", "Date and time that the transaction was received."),
QT_TRANSLATE_NOOP("MoinBridge", "Transaction status. Hover over this field to show number of confirmations."),
QT_TRANSLATE_NOOP("MoinBridge", "Type of transaction."),
QT_TRANSLATE_NOOP("MoinBridge", "Destination address of transaction."),
QT_TRANSLATE_NOOP("MoinBridge", "Short payment note."),
QT_TRANSLATE_NOOP("MoinBridge", "Amount removed from or added to balance."),
QT_TRANSLATE_NOOP("MoinBridge", "The address to send the payment to  (e.g. SXywGBZBowrppUwwNUo1GCRDTibzJi7g2M)"),
QT_TRANSLATE_NOOP("MoinBridge", "Choose address from address book"),
QT_TRANSLATE_NOOP("MoinBridge", "Enter a public key for the address above"),
QT_TRANSLATE_NOOP("MoinBridge", "Enter a label for this group"),
QT_TRANSLATE_NOOP("MoinBridge", "Name for this Wallet"),
QT_TRANSLATE_NOOP("MoinBridge", "Enter a password"),
QT_TRANSLATE_NOOP("MoinBridge", "Would you like to create a bip44 path?"),
QT_TRANSLATE_NOOP("MoinBridge", "Your recovery phrase (Keep this safe!)"),
QT_TRANSLATE_NOOP("MoinBridge", "Wallet Name for recovered account"),
QT_TRANSLATE_NOOP("MoinBridge", "Enter the password for the wallet you are trying to recover"),
QT_TRANSLATE_NOOP("MoinBridge", "Is this a bip44 path?"),
    0 // Leave this here...
};
#endif // BRIDGETRANSLATIONS_H
