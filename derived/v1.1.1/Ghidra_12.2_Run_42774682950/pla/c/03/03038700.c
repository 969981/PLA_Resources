/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03038700; name: FUN_03038700
 */


ushort * FUN_03038700(long param_1,ulong param_2,ulong param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  long lVar5;
  long lVar6;
  ushort *puVar7;
  ulong uVar8;
  uint local_18 [2];
  
  if (param_3 == 0xffffffffffffffff) {
    lVar5 = *(long *)(param_1 + 0x8f8);
    uVar1 = *(ushort *)(lVar5 + 0x60);
    if (uVar1 != 0xffff) {
      lVar6 = *(long *)(lVar5 + 0x40);
      uVar8 = (ulong)(uint)uVar1;
      do {
        if ((uint)*(ushort *)(lVar6 + uVar8 * 0x10 + 2) == ((uint)param_2 & 0xffff)) {
          return (ushort *)(lVar6 + uVar8 * 0x10 + 8);
        }
        uVar2 = *(ushort *)(lVar6 + uVar8 * 0x10);
        uVar8 = (ulong)uVar2;
      } while (uVar2 != 0xffff);
    }
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x38);
    if (uVar8 == 0xffff) {
      iVar3 = *(int *)(lVar5 + 0x48);
      uVar8 = (ulong)iVar3;
      lVar6 = *(long *)(lVar5 + 0x40);
      if ((int)(*(uint *)(lVar5 + 0x4c) & 0x3fffffff) <= iVar3) {
        lVar6 = FUN_0304662c(PTR_PTR_0434a080,iVar3 + 1,lVar6,uVar8);
        *(long *)(lVar5 + 0x40) = lVar6;
      }
      puVar7 = (ushort *)(lVar6 + uVar8 * 0x10);
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      *(int *)(lVar5 + 0x48) = iVar3 + 1;
      uVar1 = *(ushort *)(lVar5 + 0x60);
      param_2 = param_2 & 0xffffffff;
    }
    else {
      puVar7 = (ushort *)(*(long *)(lVar5 + 0x40) + uVar8 * 0x10);
      *(ushort *)(lVar5 + 0x38) = *puVar7;
    }
    puVar4 = puVar7 + 4;
    *puVar7 = uVar1;
    *(short *)(lVar5 + 0x60) = (short)uVar8;
    puVar7[1] = (ushort)param_2;
  }
  else {
    if ((long)param_3 < 0) {
      param_3 = param_3 & 0xffffffff;
    }
    else {
      uVar8 = FUN_032c0fa4(param_1 + 0x948,param_3,local_18);
      if ((uVar8 & 1) == 0) {
        param_3 = 0xffffff;
      }
      else {
        param_3 = (ulong)local_18[0];
      }
      param_2 = param_2 & 0xffffffff;
    }
    puVar4 = (ushort *)FUN_03045c28(*(undefined8 *)(param_1 + 0x8f8),param_2,param_3);
  }
  return puVar4;
}


