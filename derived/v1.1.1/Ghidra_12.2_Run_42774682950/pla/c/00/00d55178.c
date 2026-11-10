/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d55178; name: FUN_00d55178
 */


undefined8 FUN_00d55178(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = (**(code **)(*param_1 + 0x160))();
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x168))(param_1,param_2,param_3);
    uVar1 = (**(code **)(*param_1 + 0x170))(param_1,param_2,param_3);
    FUN_00d543c4(param_1,param_2,param_4,uVar1 & 1);
    if (((uVar2 & 1) == 0) && (lVar4 = param_1[0x88], lVar4 != 0)) {
      if (*(char *)(lVar4 + 0x62) != '\0') {
        return 1;
      }
      *(undefined1 *)(lVar4 + 0x60) = 1;
      if (*(char *)(lVar4 + 0x61) != '\0') {
        FUN_0283351c(*(undefined8 *)(lVar4 + 0x58),0);
      }
      FUN_02831808(*(undefined8 *)(lVar4 + 0x58),0);
    }
    uVar3 = 1;
  }
  return uVar3;
}


