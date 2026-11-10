/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb2368; name: FUN_02eb2368
 */


void FUN_02eb2368(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = *(uint *)(param_1 + 0x30);
  if ((uVar3 & 0x7fffffff) != 0) {
    iVar2 = (int)(*(long **)(param_1 + 0x28))[1];
    if (0 < iVar2) {
      *(undefined4 *)(**(long **)(param_1 + 0x28) + (long)(iVar2 + -1) * 0x10 + 0xc) =
           *(undefined4 *)(param_1 + 0x14);
      uVar3 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar3 & 0x7ffffffe) != 0) {
      iVar2 = *(int *)(*(long *)(param_1 + 0x28) + 0x20);
      if (0 < iVar2) {
        *(undefined4 *)
         (*(long *)(*(long *)(param_1 + 0x28) + 0x18) + (long)(iVar2 + -1) * 0x10 + 0xc) =
             *(undefined4 *)(param_1 + 0x14);
        uVar3 = *(uint *)(param_1 + 0x30);
      }
      if (2 < (uVar3 & 0x7fffffff)) {
        lVar4 = 0;
        uVar5 = 2;
        do {
          lVar1 = *(long *)(param_1 + 0x28) + lVar4;
          iVar2 = *(int *)(lVar1 + 0x38);
          if (0 < iVar2) {
            *(undefined4 *)(*(long *)(lVar1 + 0x30) + (long)(iVar2 + -1) * 0x10 + 0xc) =
                 *(undefined4 *)(param_1 + 0x14);
            uVar3 = *(uint *)(param_1 + 0x30);
          }
          uVar5 = uVar5 + 1;
          lVar4 = lVar4 + 0x18;
        } while (uVar5 < (uVar3 & 0x7fffffff));
      }
    }
  }
  return;
}


