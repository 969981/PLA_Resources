/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00278b98; name: FUN_00278b98
 */


void FUN_00278b98(long param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_68;
  
  if (param_2 != (code *)0x0) {
    if (0 < *(int *)(param_1 + 0xa0)) {
      lVar3 = 0;
      do {
        lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x28) + lVar3 * 8);
        local_68 = 0xffffffffffffffff;
        (*param_2)(&local_68,*(undefined8 *)(lVar4 + 0x88),param_3);
        *(undefined8 *)(lVar4 + 0x90) = local_68;
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(param_1 + 0xa0));
    }
    iVar2 = *(int *)(param_1 + 0x4c);
    if (0 < iVar2) {
      lVar3 = *(long *)(param_1 + 0x58);
      lVar4 = 0;
      iVar1 = *(int *)(lVar3 + 4);
      do {
        if (iVar1 < 1) {
          if ((long)iVar2 <= lVar4 + 1) {
            return;
          }
        }
        else {
          lVar5 = 0;
          lVar6 = 0;
          do {
            lVar3 = *(long *)(lVar3 + lVar4 * 0x38 + 0x18) + lVar5;
            *(undefined8 *)(lVar3 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(lVar3 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(lVar3 + 0x50) = 0xffffffffffffffff;
            FUN_00278d10(param_1,(undefined8 *)(lVar3 + 0x48),
                         *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x9f0));
            FUN_00278d10(param_1,(undefined8 *)(lVar3 + 0x50),
                         *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0xa10));
            FUN_00278d10(param_1,(undefined8 *)(lVar3 + 0x58),
                         *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0xa30));
            lVar3 = *(long *)(param_1 + 0x58);
            lVar6 = lVar6 + 1;
            lVar5 = lVar5 + 0x3e0;
          } while (lVar6 < *(int *)(lVar3 + lVar4 * 0x38 + 4));
          iVar2 = *(int *)(param_1 + 0x4c);
          if ((long)iVar2 <= lVar4 + 1) {
            return;
          }
        }
        lVar4 = lVar4 + 1;
        iVar1 = *(int *)(lVar3 + lVar4 * 0x38 + 4);
      } while( true );
    }
  }
  return;
}


