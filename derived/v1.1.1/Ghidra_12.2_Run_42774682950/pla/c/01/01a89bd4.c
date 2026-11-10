/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a89bd4; name: FUN_01a89bd4
 */


undefined8 FUN_01a89bd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 auStack_70 [24];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  if (*(char *)(param_1 + 0x7a0) == '\0') {
    uVar1 = FUN_01f56528(param_2,*(undefined4 *)(param_1 + 0x770),&local_40);
  }
  else {
    uVar1 = FUN_01f566c8(param_2,*(undefined4 *)(param_1 + 0x770),param_1 + 0x7b0,&local_40);
  }
  if ((uVar1 & 1) != 0) {
    local_50 = *(undefined8 *)PTR_DAT_0437a100;
    local_48 = *(undefined8 *)((long)PTR_DAT_0437a100 + 8);
    *(undefined8 *)(param_1 + 0x7b8) = uStack_38;
    *(undefined8 *)(param_1 + 0x7b0) = local_40;
    *(undefined8 *)(param_1 + 0x7c0) = local_30;
    *(undefined8 *)(param_1 + 2000) = local_50;
    *(undefined8 *)(param_1 + 0x7d8) = local_48;
    *(undefined8 *)(param_1 + 0x7c8) = local_58;
    *(undefined8 *)(param_1 + 0x7e0) = 0x3dcccccd3c23d70a;
    if (*(char *)(param_1 + 0x7a0) == '\0') {
      *(undefined1 *)(param_1 + 0x7a0) = 1;
    }
    uVar1 = FUN_01a89ce8(0x3fb33333,0x40a00000,param_1,&local_40,&local_40,0,auStack_70,1,1,0);
    if ((uVar1 & 1) != 0) {
      FUN_01a83770(param_1,auStack_70,param_3);
      FUN_01a8ac20(param_1);
      return 1;
    }
  }
  return 0;
}


