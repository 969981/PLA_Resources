/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00395ee0; name: FUN_00395ee0
 */


void FUN_00395ee0(long *param_1)

{
  long local_50;
  long lStack_48;
  undefined8 local_40;
  long local_38;
  long lStack_30;
  undefined8 local_28;
  
  *param_1 = (long)(PTR_DAT_04373cf0 + 0x10);
  lStack_30 = param_1[10];
                    /* try { // try from 00395f10 to 00395f17 has its CatchHandler @ 00395f98 */
  FUN_003994d4(&local_38,*(undefined8 *)(lStack_30 + 0x18));
  local_40 = local_28;
  lStack_48 = lStack_30;
  local_50 = local_38;
  while (local_50 != 0) {
    FUN_00395fb8(*(long *)(local_50 + 8) + 0x20);
                    /* try { // try from 00395f3c to 00395f43 has its CatchHandler @ 00395f9c */
    FUN_00399644(&local_50);
  }
                    /* try { // try from 00395f48 to 00395f4f has its CatchHandler @ 00395f94 */
  FUN_00396054(param_1 + 8);
  FUN_00396134(param_1 + 8);
  *param_1 = (long)(PTR_DAT_04373cf8 + 0x10);
  if ((param_1[2] != 0) && (param_1[1] == 0)) {
    FUN_003959c0();
  }
  std::mutex::~mutex((mutex *)(param_1 + 3));
  return;
}


