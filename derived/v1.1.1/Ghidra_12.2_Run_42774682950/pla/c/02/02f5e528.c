/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f5e528; name: FUN_02f5e528
 */


void FUN_02f5e528(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  
  lVar20 = *(long *)(param_2 + 8);
  if (lVar20 == 0) {
    lVar20 = tpidr_el0;
    if (*(long *)(lVar20 + 0x38d490) == 0) {
      lVar16 = FUN_0333d16c(0,1);
      *(long *)(lVar20 + 0x38d490) = lVar16;
      lVar20 = *(long *)(lVar16 + 0x10);
    }
    else {
      lVar20 = *(long *)(*(long *)(lVar20 + 0x38d490) + 0x10);
    }
    if (lVar20 == 0) {
      bVar8 = true;
      goto LAB_02f5e594;
    }
  }
  puVar19 = *(undefined8 **)(lVar20 + 8);
  uVar9 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
  if ((uVar9 <= *(ulong *)(lVar20 + 0x10)) &&
     (*(ulong *)(lVar20 + 8) = uVar9, puVar19 != (undefined8 *)0x0)) {
    *puVar19 = "TtBroadPhase";
    uVar7 = nn::os::GetSystemTick();
    puVar19[1] = uVar7;
  }
  puVar19 = *(undefined8 **)(lVar20 + 8);
  uVar9 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
  if ((*(ulong *)(lVar20 + 0x10) < uVar9) ||
     (*(ulong *)(lVar20 + 8) = uVar9, puVar19 == (undefined8 *)0x0)) {
    bVar8 = false;
  }
  else {
    *puVar19 = "TtCopyAabbsAndMarkActiveBodiesDirty";
    uVar7 = nn::os::GetSystemTick();
    bVar8 = false;
    puVar19[1] = uVar7;
  }
LAB_02f5e594:
  lVar16 = *(long *)(param_1 + 0x28);
  lVar13 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
  uVar4 = *(uint *)(lVar16 + 0x150);
  lVar14 = (long)(int)uVar4;
  uVar1 = *(uint *)(lVar16 + 0x154);
  lVar10 = *(long *)(lVar16 + 0x140);
  lVar11 = *(long *)(lVar16 + 0x120);
  lVar12 = *(long *)(lVar13 + 0x10);
  uVar2 = *(uint *)(lVar13 + 200);
  uVar9 = (ulong)uVar2;
  if (uVar4 <= uVar1) {
    uVar5 = *(int *)(lVar16 + 0x128) - 1;
    if ((int)uVar5 <= (int)uVar1) {
      uVar1 = uVar5;
    }
    if ((int)uVar4 <= (int)uVar1) {
      puVar17 = (undefined8 *)(lVar11 + lVar14 * 0x18);
      puVar19 = (undefined8 *)(lVar12 + lVar14 * 0xc0 + 0x60);
      cVar3 = *(char *)(lVar10 + lVar14);
      while( true ) {
        if (cVar3 != '\0') {
          uVar7 = *puVar19;
          uVar6 = puVar19[2];
          puVar17[1] = puVar19[1];
          puVar17[2] = uVar6;
          *puVar17 = uVar7;
        }
        puVar17 = puVar17 + 3;
        puVar19 = puVar19 + 0x18;
        if ((int)uVar1 <= lVar14) break;
        cVar3 = *(char *)(lVar10 + lVar14 + 1);
        lVar14 = lVar14 + 1;
      }
      lVar16 = *(long *)(param_1 + 0x28);
    }
    *(undefined4 *)(lVar16 + 0x150) = 0xffffffff;
    *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x154) = 0;
  }
  if ((*(char *)(param_1 + 0x38) != '\x04') && (0 < (int)uVar2)) {
    puVar15 = (uint *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x10) + 0xc0) + 8);
    do {
      uVar18 = (ulong)*puVar15 & 0xffffff;
      if ((*(byte *)(lVar12 + uVar18 * 0xc0 + 0x58) & 0x11) != 0) {
        *(undefined1 *)(lVar10 + uVar18) = 1;
        puVar19 = (undefined8 *)(lVar11 + uVar18 * 0x18);
        lVar16 = lVar12 + uVar18 * 0xc0;
        uVar7 = *(undefined8 *)(lVar16 + 0x60);
        uVar6 = *(undefined8 *)(lVar16 + 0x70);
        puVar19[1] = *(undefined8 *)(lVar16 + 0x68);
        puVar19[2] = uVar6;
        *puVar19 = uVar7;
      }
      uVar9 = uVar9 - 1;
      puVar15 = puVar15 + 4;
    } while (uVar9 != 0);
  }
  if (!bVar8) {
    puVar19 = *(undefined8 **)(lVar20 + 8);
    uVar9 = *(ulong *)(lVar20 + 0x10);
    uVar18 = (ulong)((long)puVar19 + 0x17) & 0xfffffffffffffff8;
    if (uVar18 <= uVar9) {
      *(ulong *)(lVar20 + 8) = uVar18;
      if (puVar19 == (undefined8 *)0x0) {
        puVar19 = (undefined8 *)&DAT_00000010;
      }
      else {
        *puVar19 = &DAT_0390f40e;
        uVar7 = nn::os::GetSystemTick();
        puVar19[1] = uVar7;
        puVar19 = *(undefined8 **)(lVar20 + 8);
        uVar9 = *(ulong *)(lVar20 + 0x10);
      }
    }
    uVar18 = (ulong)((long)puVar19 + 0x17) & 0xfffffffffffffff8;
    if ((uVar18 <= uVar9) && (*(ulong *)(lVar20 + 8) = uVar18, puVar19 != (undefined8 *)0x0)) {
      *puVar19 = &DAT_0390f40e;
      uVar7 = nn::os::GetSystemTick();
      puVar19[1] = uVar7;
    }
  }
  return;
}


