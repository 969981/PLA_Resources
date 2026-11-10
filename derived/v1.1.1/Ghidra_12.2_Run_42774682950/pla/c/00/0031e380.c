/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031e380; name: FUN_0031e380
 */


void FUN_0031e380(undefined8 *param_1,char *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  byte local_38 [8];
  ulong local_30;
  ulong local_28;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
                    /* try { // try from 0031e3a0 to 0031e3db has its CatchHandler @ 0031e500 */
  FUN_002e4094(param_1,"Can\'t ",6);
  sVar3 = strlen(param_2);
  FUN_002e4094(param_1,param_2,sVar3);
  FUN_002e4094(param_1," message of type \"",0x12);
                    /* try { // try from 0031e3e4 to 0031e3f3 has its CatchHandler @ 0031e4f0 */
  (**(code **)(*param_3 + 0x10))(local_38,param_3);
  uVar1 = (ulong)(local_38[0] >> 1);
  uVar2 = (ulong)local_38 | 1;
  if ((local_38[0] & 1) != 0) {
    uVar1 = local_30;
    uVar2 = local_28;
  }
                    /* try { // try from 0031e410 to 0031e417 has its CatchHandler @ 0031e4c8 */
  FUN_002e4094(param_1,uVar2,uVar1);
  if ((local_38[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_28);
  }
                    /* try { // try from 0031e430 to 0031e443 has its CatchHandler @ 0031e500 */
  FUN_002e4094(param_1,"\" because it is missing required fields: ",0x29);
                    /* try { // try from 0031e44c to 0031e45b has its CatchHandler @ 0031e4b8 */
  (**(code **)(*param_3 + 0x38))(local_38,param_3);
  uVar1 = (ulong)(local_38[0] >> 1);
  uVar2 = (ulong)local_38 | 1;
  if ((local_38[0] & 1) != 0) {
    uVar1 = local_30;
    uVar2 = local_28;
  }
                    /* try { // try from 0031e478 to 0031e47f has its CatchHandler @ 0031e4a8 */
  FUN_002e4094(param_1,uVar2,uVar1);
  if ((local_38[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_28);
  }
  return;
}


