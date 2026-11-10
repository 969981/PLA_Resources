/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056a490; name: FUN_0056a490
 */


void FUN_0056a490(undefined8 param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  undefined *puVar4;
  byte local_38 [8];
  ulong local_30;
  ulong local_28;
  
  if (param_2 - 0x20U < 0x5f) {
    pvVar3 = memchr("[]^-\\",param_2,6);
    if (pvVar3 != (void *)0x0) {
      FUN_002e4094(param_1,&DAT_038e5aa0,1);
    }
    FUN_002e6bd4(param_1,1,param_2);
    return;
  }
  switch(param_2) {
  case 9:
    puVar4 = &DAT_03949f0b;
    break;
  case 10:
    puVar4 = &DAT_039ba48f;
    break;
  default:
    if (param_2 < 0x100) {
      FUN_00550b30(local_38,"\\x%02x",param_2);
      uVar1 = (ulong)(local_38[0] >> 1);
      uVar2 = (ulong)local_38 | 1;
      if ((local_38[0] & 1) != 0) {
        uVar1 = local_30;
        uVar2 = local_28;
      }
                    /* try { // try from 0056a5a4 to 0056a5ab has its CatchHandler @ 0056a624 */
      FUN_002e4094(param_1,uVar2,uVar1);
    }
    else {
      FUN_00550b30(local_38,"\\x{%x}",param_2);
      uVar1 = (ulong)(local_38[0] >> 1);
      uVar2 = (ulong)local_38 | 1;
      if ((local_38[0] & 1) != 0) {
        uVar1 = local_30;
        uVar2 = local_28;
      }
                    /* try { // try from 0056a5e4 to 0056a5eb has its CatchHandler @ 0056a614 */
      FUN_002e4094(param_1,uVar2,uVar1);
    }
    if ((local_38[0] & 1) == 0) {
      return;
    }
    FUN_002e2ea0(PTR_LAB_04373088,local_28);
    return;
  case 0xc:
    puVar4 = &DAT_03904d2f;
    break;
  case 0xd:
    puVar4 = &DAT_0391853c;
  }
  FUN_002e4094(param_1,puVar4,2);
  return;
}


