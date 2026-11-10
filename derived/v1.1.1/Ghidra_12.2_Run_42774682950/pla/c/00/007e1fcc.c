/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e1fcc; name: FUN_007e1fcc
 */


void FUN_007e1fcc(long param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  
  FUN_00847370();
  plVar3 = (long *)FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3,*(undefined8 *)(param_2 + 2));
  cVar2 = FUN_008473d0(param_1);
  if ((cVar2 != -3) && (lVar5 = FUN_00847388(param_1), lVar5 != *(long *)(lVar4 + 0x30))) {
    if (*param_2 == 0) {
      *(undefined1 *)(param_1 + (ulong)*(byte *)(lVar4 + 0x28) + 0x78) = 1;
    }
    else if (*param_2 == 1) {
      if (*(int *)(param_1 + 0x68) == 0) {
        bVar1 = *(byte *)(lVar4 + 0x28);
      }
      else {
        bVar1 = *(byte *)(lVar4 + 0x28);
        uVar6 = 0;
        puVar7 = (uint *)(((ulong)(bVar1 >> 3) & 0x1c) + *(long *)(param_1 + 0x60) + 0x10);
        do {
          uVar6 = uVar6 + 1;
          *puVar7 = *puVar7 & ~(1 << (ulong)(bVar1 & 0x1f));
          puVar7 = puVar7 + 6;
        } while (uVar6 < *(uint *)(param_1 + 0x68));
      }
      *(undefined1 *)(param_1 + (ulong)bVar1 + 0x78) = 0;
      return;
    }
  }
  return;
}


