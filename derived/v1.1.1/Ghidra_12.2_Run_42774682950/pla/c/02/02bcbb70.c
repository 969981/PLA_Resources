/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcbb70; name: FUN_02bcbb70
 */


void FUN_02bcbb70(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (((DAT_043f1380 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_043f1380), iVar4 != 0)) {
    if (((DAT_043f1788 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_043f1788), iVar4 != 0)) {
      uVar5 = 0;
      do {
        uVar7 = 0x80;
        uVar9 = 1;
        uVar10 = 1;
        uVar6 = uVar5;
        do {
          uVar10 = uVar10 | uVar7;
          uVar8 = (uint)uVar6 & uVar10 & 0xffff;
          bVar2 = uVar7 != uVar8;
          uVar7 = uVar7 >> 1;
          if (uVar9 != uVar8 && bVar2) {
            uVar10 = 0;
          }
          uVar8 = uVar10 ^ (uint)uVar6;
          uVar6 = (ulong)uVar8;
          uVar10 = uVar9 << 1;
          uVar9 = uVar10 & 0xfffe;
        } while (uVar9 < uVar7);
        uVar9 = -(uVar8 & 1) & 0x9823b6e0;
        uVar7 = ((int)(uVar8 << 0x1e) >> 0x1f & 0x4c11db70U ^ uVar9 ^
                 (int)(uVar8 << 0x1d) >> 0x1f & 0x2608edb8U ^
                 (int)(uVar8 << 0x1c) >> 0x1f & 0x130476dcU ^
                 (int)(uVar8 << 0x1b) >> 0x1f & 0x9823b6eU ^
                (int)(uVar8 << 0x1a) >> 0x1f & 0x4c11db7U) << 1;
        uVar10 = 0;
        if ((int)(uVar9 ^ (uVar8 & 0x40) << 0x19) < 0) {
          uVar10 = 0x4c11db7;
        }
        uVar9 = 0;
        if ((int)(uVar7 ^ (uVar8 & 0x80) << 0x18) < 0) {
          uVar9 = 0x4c11db7;
        }
        uVar9 = uVar9 ^ (uVar7 ^ uVar10) << 1;
        uVar7 = 0x80000000;
        uVar10 = 1;
        do {
          uVar8 = uVar7 | uVar10;
          bVar2 = (uVar8 & uVar9) != uVar10;
          uVar10 = uVar10 * 2;
          bVar3 = (uVar8 & uVar9) != uVar7;
          uVar7 = uVar7 >> 1;
          if (bVar2 && bVar3) {
            uVar8 = 0;
          }
          uVar9 = uVar8 ^ uVar9;
        } while (uVar10 < uVar7);
        uVar8 = 0x80;
        uVar10 = 1;
        uVar7 = 1;
        uVar6 = uVar5;
        do {
          uVar7 = uVar7 | uVar8;
          uVar1 = (uint)uVar6 & uVar7 & 0xffff;
          bVar2 = uVar8 != uVar1;
          uVar8 = uVar8 >> 1;
          if (uVar10 != uVar1 && bVar2) {
            uVar7 = 0;
          }
          uVar6 = (ulong)(uVar7 ^ (uint)uVar6);
          uVar7 = uVar10 << 1;
          uVar10 = uVar7 & 0xfffe;
        } while (uVar10 < uVar8);
        uVar10 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar10;
        *(uint *)(&DAT_043f1388 + (uVar6 & 0xffff) * 4) = uVar9;
      } while ((uVar10 & 0xffff) < 0x100);
      __cxa_guard_release(&DAT_043f1788);
    }
    DAT_043f1378 = &DAT_043f1388;
    __cxa_guard_release(&DAT_043f1380);
  }
  if (param_3 != 0) {
    uVar5 = param_3;
    if ((param_3 & 1) != 0) {
      uVar5 = param_3 - 1;
    }
    if (param_3 != 1) {
      do {
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
  }
  return;
}


