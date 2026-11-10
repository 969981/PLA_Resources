/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03396ae4; name: FUN_03396ae4
 */


int FUN_03396ae4(long param_1,byte *param_2)

{
  undefined1 **ppuVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined1 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  iVar5 = FUN_033781a0();
  lVar16 = *(long *)(param_1 + 8);
  if (iVar5 == *(int *)(lVar16 + 0xe0)) {
    if ((((*param_2 >> 3 & 1) == 0) ||
        (plVar7 = (long *)FUN_032e2008(param_2,8), plVar7 == (long *)0x0)) ||
       (local_78 = (undefined1 *)*plVar7, local_78 == (undefined1 *)0x0)) {
      lVar13 = *(long *)(param_1 + 8);
      local_78 = &DAT_03996322;
      lVar8 = FUN_033962f8(lVar13 + 0x30,&local_78);
      lVar10 = *(long *)(lVar13 + 0x30);
      iVar9 = *(int *)(lVar16 + 0xe0);
      lVar13 = *(long *)(lVar16 + 0xd8);
      iVar6 = iVar9 + 1;
      if ((int)(*(uint *)(lVar16 + 0xe4) & 0x3fffffff) <= iVar9) {
        lVar13 = FUN_0338cccc(PTR_PTR_0434a080,iVar6);
        iVar9 = *(int *)(lVar16 + 0xe0);
        *(long *)(lVar16 + 0xd8) = lVar13;
      }
      puVar11 = (undefined4 *)(lVar13 + (long)iVar9 * 0x18);
      *puVar11 = (int)((ulong)(lVar8 - lVar10) >> 3);
      puVar11[1] = 1;
      *(undefined8 *)(puVar11 + 2) = 0;
      *(undefined8 *)(puVar11 + 4) = 0x8000000000000000;
      *(int *)(lVar16 + 0xe0) = iVar6;
    }
    else {
      lVar13 = *(long *)(param_1 + 8);
      lVar8 = FUN_033962f8(lVar13 + 0x30,&local_78);
      lVar10 = *(long *)(lVar13 + 0x30);
      iVar9 = *(int *)(lVar16 + 0xe0);
      lVar13 = *(long *)(lVar16 + 0xd8);
      iVar6 = iVar9 + 1;
      if ((int)(*(uint *)(lVar16 + 0xe4) & 0x3fffffff) <= iVar9) {
        lVar13 = FUN_0338cccc(PTR_PTR_0434a080,iVar6);
        iVar9 = *(int *)(lVar16 + 0xe0);
        *(long *)(lVar16 + 0xd8) = lVar13;
      }
      puVar11 = (undefined4 *)(lVar13 + (long)iVar9 * 0x18);
      *puVar11 = (int)((ulong)(lVar8 - lVar10) >> 3);
      puVar11[1] = 1;
      *(undefined8 *)(puVar11 + 2) = 0;
      *(undefined8 *)(puVar11 + 4) = 0x8000000000000000;
      *(int *)(lVar16 + 0xe0) = iVar6;
      local_78 = (undefined1 *)0x0;
      local_70 = 0x8000000000000000;
      if ((((char)param_2[1] < '\0') &&
          (plVar7 = (long *)FUN_032e2008(param_2,0x8000), puVar3 = PTR_PTR_0434a080,
          plVar7 != (long *)0x0)) && (lVar8 = *plVar7, lVar8 != 0)) {
        uVar2 = *(ushort *)(lVar8 + 8);
        uVar15 = (ulong)uVar2;
        if (uVar2 != 0) {
          local_78 = (undefined1 *)FUN_03396e48(PTR_PTR_0434a080,uVar2,0,0,(long)&local_70 + 4);
          puVar17 = (undefined8 *)(lVar8 + 0x18);
          while( true ) {
            uVar15 = uVar15 - 1;
            lVar8 = (long)(int)local_70;
            iVar6 = (int)local_70 + 1;
            if ((int)(local_70._4_4_ & 0x3fffffff) <= (int)local_70) {
              local_78 = (undefined1 *)
                         FUN_03396e48(puVar3,iVar6,local_78,local_70 & 0xffffffff,
                                      (long)&local_70 + 4);
            }
            puVar4 = local_78;
            local_70 = CONCAT44(local_70._4_4_,iVar6);
            lVar10 = *(long *)(param_1 + 8);
            local_68 = *puVar17;
            lVar13 = FUN_033962f8(lVar10 + 0x30,&local_68);
            *(long *)(puVar4 + lVar8 * 0x10) =
                 (lVar13 - *(long *)(lVar10 + 0x30)) * 0x20000000 >> 0x20;
            if (*(char *)*puVar17 == 't') {
              iVar6 = FUN_03396ae4(param_1,puVar17[-1]);
              lVar13 = (long)iVar6;
            }
            else {
              lVar13 = puVar17[-1];
            }
            *(long *)(puVar4 + lVar8 * 0x10 + 8) = lVar13;
            if (uVar15 == 0) break;
            puVar17 = puVar17 + 2;
          }
        }
      }
      uVar15 = local_70;
      puVar3 = PTR_PTR_0434a080;
      ppuVar1 = (undefined1 **)(*(long *)(lVar16 + 0xd8) + (long)iVar5 * 0x18 + 8);
      if (&local_78 == ppuVar1) {
        uVar12 = (ulong)local_70._4_4_;
        local_70 = (ulong)local_70._4_4_ << 0x20;
        if ((-1 < (long)uVar15) && (local_78 != (undefined1 *)0x0)) {
          (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                    (PTR_PTR_0434a080,local_78,(uVar12 & 0x3fffffff) << 4);
        }
      }
      else {
        lVar16 = *(long *)(lVar16 + 0xd8) + (long)iVar5 * 0x18;
        puVar14 = (uint *)(lVar16 + 0x14);
        puVar11 = (undefined4 *)(lVar16 + 0x10);
        *puVar11 = 0;
        if ((-1 < (int)*puVar14) && (*ppuVar1 != (undefined1 *)0x0)) {
          (**(code **)(*(long *)puVar3 + 0x18))(puVar3,*ppuVar1,((ulong)*puVar14 & 0x3fffffff) << 4)
          ;
        }
        *ppuVar1 = (undefined1 *)0x0;
        *puVar11 = 0;
        *puVar14 = 0x80000000;
        if ((long)local_70 < 0) {
          FUN_0338cbf4(puVar3,&local_78);
        }
        *ppuVar1 = local_78;
        *puVar11 = (int)local_70;
        *puVar14 = local_70._4_4_;
      }
    }
  }
  return iVar5;
}


