/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d9d958; name: FUN_02d9d958
 */


/* WARNING: Removing unreachable block (ram,0x02d9dc78) */
/* WARNING: Type propagation algorithm not settling */

void FUN_02d9d958(long *param_1,void *param_2,size_t *param_3)

{
  long *__s;
  byte *pbVar1;
  uint uVar2;
  ushort uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  bool bVar7;
  undefined2 uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  long *plVar13;
  uint uVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  ushort *puVar18;
  ulong uVar19;
  undefined1 local_48 [8];
  undefined1 *local_40;
  ulong local_38;
  
  local_38 = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *param_1 = (long)&PTR_LAB_04298ba8;
  local_48[0] = 0;
  __s = param_1 + 1;
  local_40 = local_48;
  memset(__s,0,0x110);
  if (((*PTR_DAT_04388528 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04388528), iVar10 != 0)) {
    FUN_00100250(PTR_FUN_04388540,PTR_DAT_04388530,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04388528);
  }
  plVar15 = (long *)PTR_DAT_04388538;
  plVar13 = (long *)PTR_DAT_04388530;
  pbVar11 = PTR_DAT_04388528;
  lVar17 = *(long *)PTR_DAT_04388530;
  *(long *)PTR_DAT_04388538 = lVar17;
  if (lVar17 == 0) {
    puVar18 = &DAT_04408d98;
    uVar4 = local_48[0];
    puVar5 = local_40;
    uVar6 = local_38;
  }
  else {
    if (((*pbVar11 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04388528), pbVar11 = PTR_DAT_04388528,
       plVar13 = (long *)PTR_DAT_04388530, plVar15 = (long *)PTR_DAT_04388538, iVar10 != 0)) {
      FUN_00100250(PTR_FUN_04388540,PTR_DAT_04388530,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04388528);
      pbVar11 = PTR_DAT_04388528;
      plVar13 = (long *)PTR_DAT_04388530;
      plVar15 = (long *)PTR_DAT_04388538;
    }
    lVar17 = *plVar13;
    *plVar15 = lVar17;
    puVar18 = (ushort *)(lVar17 + 0x50);
    uVar4 = local_48[0];
    puVar5 = local_40;
    uVar6 = local_38;
  }
  if (__s != (long *)0x0) {
    pbVar1 = (byte *)((long)param_1 + 10);
    uVar3 = *puVar18;
    if ((uVar3 & 1) != 0) {
      *pbVar1 = *pbVar1 | 1;
    }
    if (((uVar3 & 7) >> 1 & 1) != 0) {
      *pbVar1 = *pbVar1 | 2;
    }
    if ((uVar3 & 7) >> 2 != 0) {
      *pbVar1 = *pbVar1 | 4;
    }
    uVar19 = uVar6 + 1 >> 3;
    puVar5[uVar19] = puVar5[uVar19] | (byte)(1 << (ulong)((uint)(uVar6 + 1) & 7));
    if (pbVar1 != (byte *)0x0) {
      if ((uVar3 >> 3 & 1) != 0) {
        *pbVar1 = *pbVar1 | 8;
      }
      uVar19 = uVar6 + 2 >> 3;
      puVar5[uVar19] = puVar5[uVar19] | (byte)(1 << (ulong)((uint)(uVar6 + 2) & 7));
      uVar14 = uVar3 >> 4 & 0xf;
      if ((uVar3 >> 4 & 1) != 0) {
        *pbVar1 = *pbVar1 | 0x10;
      }
      if ((uVar14 >> 1 & 1) != 0) {
        *pbVar1 = *pbVar1 | 0x20;
      }
      if ((uVar14 >> 2 & 1) != 0) {
        *pbVar1 = *pbVar1 | 0x40;
      }
      if (uVar14 >> 3 != 0) {
        *pbVar1 = *pbVar1 | 0x80;
      }
      uVar19 = uVar6 + 3 >> 3;
      puVar5[uVar19] = puVar5[uVar19] | (byte)(1 << (ulong)((uint)(uVar6 + 3) & 7));
      uVar14 = uVar3 >> 8 & 0xf;
      if ((uVar3 >> 8 & 1) != 0) {
        *(byte *)((long)param_1 + 0xb) = *(byte *)((long)param_1 + 0xb) | 1;
      }
      if ((uVar14 >> 1 & 1) != 0) {
        *(byte *)((long)param_1 + 0xb) = *(byte *)((long)param_1 + 0xb) | 2;
      }
      if ((uVar14 >> 2 & 1) != 0) {
        *(byte *)((long)param_1 + 0xb) = *(byte *)((long)param_1 + 0xb) | 4;
      }
      if (uVar14 >> 3 != 0) {
        *(byte *)((long)param_1 + 0xb) = *(byte *)((long)param_1 + 0xb) | 8;
      }
      uVar19 = uVar6 + 4 >> 3;
      puVar5[uVar19] = puVar5[uVar19] | (byte)(1 << (ulong)((uint)(uVar6 + 4) & 7));
    }
    if ((__s != (long *)0x0) &&
       (uVar19 = uVar6 + 5 >> 3,
       puVar5[uVar19] = puVar5[uVar19] | (byte)(1 << (ulong)((uint)(uVar6 + 5) & 7)),
       __s != (long *)0x0)) {
      uVar19 = uVar6 + 6 >> 3;
      puVar5[uVar19] = puVar5[uVar19] | (byte)(1 << (ulong)((uint)(uVar6 + 6) & 7));
      local_40 = puVar5;
      local_38 = uVar6;
      if ((param_2 != (void *)0x0) && (*param_3 < 0x10c)) {
        local_48[0] = uVar4;
        if (((*pbVar11 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04388528), plVar13 = (long *)PTR_DAT_04388530,
           plVar15 = (long *)PTR_DAT_04388538, iVar10 != 0)) {
          FUN_00100250(PTR_FUN_04388540,PTR_DAT_04388530,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04388528);
          plVar13 = (long *)PTR_DAT_04388530;
          plVar15 = (long *)PTR_DAT_04388538;
        }
        lVar17 = *plVar13;
        *plVar15 = lVar17;
        if (lVar17 != 0) {
          memcpy((void *)((long)param_1 + 0xd),param_2,*param_3);
          lVar17 = (**(code **)(*param_1 + 0x10))(param_1);
          uVar9 = 0;
          uVar12 = 0x8000;
          uVar14 = 1;
          uVar16 = 1;
          do {
            uVar16 = uVar16 | uVar12;
            uVar2 = uVar9 & uVar16 & 0xffff;
            bVar7 = uVar12 != uVar2;
            uVar12 = uVar12 >> 1;
            if (uVar14 != uVar2 && bVar7) {
              uVar16 = 0;
            }
            uVar9 = uVar16 ^ uVar9;
            uVar16 = uVar14 << 1;
            uVar14 = uVar16 & 0xfffe;
          } while (uVar14 < uVar12);
          uVar8 = FUN_02bcba34(uVar9,lVar17 + 2,0x10e);
          if (__s == (long *)0x0) {
            return;
          }
          *(undefined2 *)__s = uVar8;
          local_40[local_38 >> 3] =
               local_40[local_38 >> 3] | (byte)(1 << (ulong)((uint)local_38 & 7));
          return;
        }
      }
      if (__s != (long *)0x0) {
        *(undefined2 *)__s = 0xffff;
        local_40[local_38 >> 3] = local_40[local_38 >> 3] | (byte)(1 << (ulong)((uint)local_38 & 7))
        ;
      }
    }
  }
  return;
}


