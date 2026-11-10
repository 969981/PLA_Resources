/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e4f20; name: FUN_007e4f20
 */


void FUN_007e4f20(long param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  int local_30 [4];
  
  if (*PTR_DAT_04377430 != '\0') {
    uVar2 = FUN_007e5704();
    puVar1 = PTR_DAT_043773b8;
    *(undefined4 *)(PTR_DAT_043773b8 + 0xa8) = uVar2;
    uVar2 = FUN_007e5728();
    *(undefined4 *)(puVar1 + 0xac) = uVar2;
    lVar3 = FUN_007e5794();
    if (lVar3 != 0) {
      FUN_007e5794();
      FUN_007e57b8();
    }
    puVar1[0xb2] = 4;
    FUN_007e5480();
    FUN_007e5734();
    lVar3 = param_1 + 0x20;
    uVar4 = FUN_007e5f0c(lVar3);
    if (((uVar4 & 1) == 0) && (uVar4 = FUN_007e3604(param_1 + 0x588), (uVar4 & 1) != 0)) {
      *(int *)(param_1 + 0x1c) = param_2;
      if (param_2 == 0) {
        *(undefined1 *)(param_1 + 0x580) = 1;
      }
      FUN_007e5860(local_30,lVar3,param_1,param_2);
      if (local_30[0] == 0) {
        FUN_007e5e70(lVar3,1);
        return;
      }
    }
  }
  return;
}


