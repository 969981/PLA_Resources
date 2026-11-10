/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091e984; name: FUN_0091e984
 */


undefined8 FUN_0091e984(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 local_160;
  char *pcStack_158;
  undefined8 local_150;
  long *local_148;
  undefined8 local_140;
  char *pcStack_138;
  undefined8 local_130;
  long *local_128;
  uint local_48;
  long *local_38;
  
  bVar3 = *(byte *)(*(long *)(param_2 + 0x70) + 0x7d);
  bVar4 = *(byte *)(*(long *)(*(long *)(param_1 + 0x68) + 0x100) + 0x71);
  lVar10 = 3;
  if (0x17 < bVar3) {
    lVar10 = (ulong)(bVar3 < 0x1e) << 2;
  }
  lVar2 = 1;
  if (0x11 < bVar3) {
    lVar2 = lVar10;
  }
  lVar10 = 2;
  if (0xb < bVar3) {
    lVar10 = lVar2;
  }
  lVar2 = 0;
  if (5 < bVar3) {
    lVar2 = lVar10;
  }
  uVar5 = *(uint *)(*(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x68) + 0xd0) + 0x68) + 0x98)
                   + 0x110);
  if (uVar5 < 3) {
    uVar11 = (&PTR_DAT_041b7688)[(int)uVar5][lVar2];
  }
  else {
    uVar11 = 2;
  }
  local_160 = CONCAT44(5,CONCAT13(uVar11,0x101));
  FUN_009346d8(&local_140,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0),&local_160);
  if (bVar4 != bVar3 && 1 < local_48) {
    local_140 = 0x63e2672f9e43a54e;
    pcStack_138 = "battle_logic";
    local_130 = 0xc;
    local_128 = (long *)0x0;
    local_160 = 0x9d065436e86b149d;
    pcStack_158 = "allowance_per";
    local_150 = 0xd;
    local_148 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    uVar9 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar9;
    FUN_00d7d9e4(&local_38,uVar9,&local_140);
    if (local_38 == (long *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_00d78f50(local_38,&local_160);
      if (local_38 != (long *)0x0) {
        plVar1 = local_38 + 10;
        do {
          iVar13 = (int)*plVar1 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *(int *)plVar1 = iVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar13 == 0) {
          (**(code **)(*local_38 + 0x10))();
        }
      }
    }
    if (local_148 != (long *)0x0) {
      (**(code **)(*local_148 + 0x20))();
    }
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x20))();
    }
    lVar10 = *(long *)(*(long *)(param_1 + 0x68) + 0xc0);
    uVar12 = *(ulong *)(lVar10 + 0x70);
    uVar14 = *(ulong *)(lVar10 + 0x78);
    do {
      uVar15 = uVar12 ^ uVar14;
      iVar13 = (int)uVar14;
      uVar14 = uVar15 >> 0x1b | uVar15 << 0x25;
      uVar5 = (int)uVar12 + iVar13 & 0x7f;
      uVar12 = uVar15 ^ (uVar12 >> 0x28 | uVar12 << 0x18) ^ uVar15 << 0x10;
    } while (99 < uVar5);
    *(ulong *)(lVar10 + 0x70) = uVar12;
    *(ulong *)(lVar10 + 0x78) = uVar14;
    if (uVar5 < iVar8 * (local_48 - 1)) {
      return 1;
    }
  }
  return 0;
}


