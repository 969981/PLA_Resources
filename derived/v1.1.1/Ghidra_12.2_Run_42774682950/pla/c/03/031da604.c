/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031da604; name: FUN_031da604
 */


void FUN_031da604(long param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *__dest;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  uint *puVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined4 *local_88;
  int local_80;
  undefined2 local_7c;
  undefined4 *local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  uint local_54;
  
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)*param_2 * 0x10;
  iVar5 = (int)*(short *)(lVar6 + 10) + (int)*(short *)(lVar6 + 8);
  if (iVar5 < 0x17) {
    plVar2 = (long *)(param_1 + 0x10);
    lVar6 = FUN_031dbecc(plVar2,param_2);
    if ((lVar6 == 0) ||
       (uVar9 = (ulong)*(uint *)(lVar6 + 4) | (lVar6 - *(long *)(param_1 + 0x20)) * 0x20000000,
       (int)uVar9 < 0)) {
      uVar4 = FUN_031dd9a8(plVar2,param_2);
      if (*(uint *)(param_1 + 0x18) == uVar4) {
        lVar6 = *(long *)(param_1 + 0x10);
        iVar5 = uVar4 + 1;
        if ((int)(*(uint *)(param_1 + 0x1c) & 0x3fffffff) <= (int)uVar4) {
          lVar6 = FUN_031dda90(PTR_PTR_0434a080,iVar5);
          uVar4 = *(uint *)(param_1 + 0x18);
          *(long *)(param_1 + 0x10) = lVar6;
        }
        piVar10 = (int *)(lVar6 + (long)(int)uVar4 * 8);
        *piVar10 = *param_2;
        piVar10[1] = 0x800000;
        *(int *)(param_1 + 0x18) = iVar5;
      }
      else {
        *(undefined4 *)(*plVar2 + ((long)((ulong)uVar4 << 0x20) >> 0x1d) + 4) = 0x800000;
      }
    }
    else {
      lVar6 = *plVar2 + ((long)(uVar9 << 0x20) >> 0x1d);
      *(uint *)(lVar6 + 4) = *(uint *)(lVar6 + 4) | 0x800000;
    }
  }
  else {
    plVar2 = (long *)(param_1 + 0x30);
    lVar6 = FUN_031dc4f4(plVar2,param_2);
    if ((lVar6 == 0) ||
       (uVar4 = *(uint *)(lVar6 + 4) |
                ((int)lVar6 - (int)*(undefined8 *)(param_1 + 0x40)) * 0x20000000, (int)uVar4 < 0)) {
      FUN_031db014(&local_80,iVar5);
      local_7c = CONCAT11(1,(undefined1)local_7c);
      iVar5 = FUN_031ddb18(plVar2,param_2);
      puVar3 = local_78;
      puVar15 = PTR_PTR_0434a080;
      if (*(int *)(param_1 + 0x38) == iVar5) {
        lVar6 = *(long *)(param_1 + 0x30);
        iVar1 = iVar5 + 1;
        if ((int)(*(uint *)(param_1 + 0x3c) & 0x3fffffff) <= iVar5) {
          lVar6 = FUN_031ddc04(PTR_PTR_0434a080,iVar1);
          iVar5 = *(int *)(param_1 + 0x38);
          *(long *)(param_1 + 0x30) = lVar6;
        }
        puVar3 = local_78;
        piVar10 = (int *)(lVar6 + (long)iVar5 * 0x28);
        *piVar10 = *param_2;
        piVar11 = piVar10 + 4;
        piVar11[0] = 0;
        piVar11[1] = 0;
        *(undefined2 *)(piVar10 + 3) = local_7c;
        piVar10[2] = local_80;
        puVar13 = (uint *)(piVar10 + 6);
        puVar13[0] = 0;
        puVar13[1] = 0x80000000;
        local_54 = local_70;
        if ((int)local_70 < 1) {
          piVar11[0] = 0;
          piVar11[1] = 0;
          *puVar13 = 0;
          piVar10[7] = 0x80000000;
        }
        else {
          local_88 = local_78;
          puVar7 = (undefined4 *)FUN_032cf190(puVar15,4,&local_54);
          *(undefined4 **)piVar11 = puVar7;
          *puVar13 = local_70;
          piVar10[7] = local_54;
          uVar4 = local_70 & 3;
          if (2 < local_70 - 1) {
            iVar12 = uVar4 - local_70;
            puVar8 = puVar7;
            do {
              puVar3 = local_88 + 4;
              *puVar8 = *local_88;
              puVar8[1] = local_88[1];
              puVar8[2] = local_88[2];
              puVar7 = puVar8 + 4;
              iVar12 = iVar12 + 4;
              puVar8[3] = local_88[3];
              puVar8 = puVar7;
              local_88 = puVar3;
            } while (iVar12 != 0);
          }
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar7 = *puVar3;
            puVar7 = puVar7 + 1;
            puVar3 = puVar3 + 1;
          }
        }
        *(undefined4 *)(lVar6 + (long)iVar5 * 0x28 + 0x20) = local_68;
        *(int *)(param_1 + 0x38) = iVar1;
      }
      else {
        lVar14 = *plVar2;
        lVar6 = lVar14 + (long)iVar5 * 0x28;
        lVar16 = (long)iVar5;
        piVar10 = (int *)(lVar6 + 8);
        *piVar10 = local_80;
        *(undefined2 *)(lVar6 + 0xc) = local_7c;
        if (piVar10 != &local_80) {
          lVar6 = lVar14 + lVar16 * 0x28;
          puVar17 = (undefined8 *)(lVar6 + 0x10);
          __dest = (void *)*puVar17;
          if ((int)(*(uint *)(lVar6 + 0x1c) & 0x3fffffff) < (int)local_70) {
            __dest = (void *)FUN_032bd1d4(PTR_PTR_0434a080,local_70,4,__dest,
                                          *(undefined4 *)(lVar14 + lVar16 * 0x28 + 0x18));
            *puVar17 = __dest;
          }
          memcpy(__dest,puVar3,(long)(int)local_70 << 2);
          *(uint *)(lVar14 + lVar16 * 0x28 + 0x18) = local_70;
        }
        *(undefined4 *)(lVar14 + lVar16 * 0x28 + 0x20) = local_68;
        puVar15 = PTR_PTR_0434a080;
      }
      local_70 = 0;
      if ((-1 < (int)local_6c) && (local_78 != (undefined4 *)0x0)) {
        FUN_032cf244(puVar15,local_78,4,local_6c & 0x3fffffff);
      }
    }
    else {
      *(undefined1 *)(*plVar2 + (long)(int)uVar4 * 0x28 + 0xd) = 1;
    }
  }
  return;
}


