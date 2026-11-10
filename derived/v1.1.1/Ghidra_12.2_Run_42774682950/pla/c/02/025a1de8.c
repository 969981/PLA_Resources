/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025a1de8; name: FUN_025a1de8
 */


undefined8 FUN_025a1de8(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong *puVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  
  if (*(long *)(param_1 + 0xe8) == 0) {
LAB_025a1f2c:
    uVar3 = 1;
  }
  else {
    plVar10 = *(long **)(param_1 + 0xc0);
    if (plVar10 != (long *)0x0) {
      uVar11 = 0;
      do {
        while ((plVar10[3] != 0 && (uVar2 = FUN_02a43a8c(), (uVar2 & 1) == 0))) {
          uVar11 = (int)plVar10[5] + uVar11;
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_025a1e4c;
        }
        plVar10 = (long *)FUN_025a807c(param_1 + 0x90,plVar10);
      } while (plVar10 != (long *)0x0);
LAB_025a1e4c:
      if (uVar11 != 0) {
        if (((*PTR_DAT_04379678 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04379678), iVar1 != 0)) {
          FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379678);
        }
        lVar4 = *(long *)PTR_DAT_04379680;
        *(long *)PTR_DAT_04379688 = lVar4;
        if (uVar11 == 1) {
          uVar6 = 0;
          plVar10 = *(long **)(param_1 + 0xc0);
        }
        else {
          puVar5 = *(ulong **)(lVar4 + 0xd8);
          lVar4 = 0x1f;
          if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar11) & 0x1f) & uVar11) != 0) {
            lVar4 = 0x20;
          }
          uVar7 = lVar4 - LZCOUNT(uVar11);
          uVar2 = uVar7 >> 6;
          if ((uVar7 & 0x3f) != 0) {
            uVar2 = uVar2 + 1;
          }
          if (uVar7 < uVar2) {
            uVar8 = 0;
          }
          else {
            uVar9 = 0;
            if (uVar2 != 0) {
              uVar9 = uVar7 / uVar2;
            }
            uVar8 = (uint)(0xffffffffffffffff >> (-uVar9 & 0x3f));
          }
          uVar2 = *puVar5;
          uVar7 = puVar5[1];
          do {
            uVar9 = uVar2 ^ uVar7;
            iVar1 = (int)uVar7;
            uVar7 = uVar9 >> 0x1b | uVar9 << 0x25;
            uVar6 = (int)uVar2 + iVar1 & uVar8;
            uVar2 = uVar9 ^ (uVar2 >> 0x28 | uVar2 << 0x18) ^ uVar9 << 0x10;
          } while (uVar11 <= uVar6);
          *puVar5 = uVar2;
          puVar5[1] = uVar7;
          plVar10 = *(long **)(param_1 + 0xc0);
        }
        if (plVar10 != (long *)0x0) {
          iVar1 = 0;
          do {
            iVar1 = (int)plVar10[5] + iVar1;
            if ((int)uVar6 < iVar1) {
              *(long *)(param_1 + 0x80) = plVar10[2];
              break;
            }
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
        FUN_025a1f9c(param_1,*(undefined8 *)(param_1 + 0x80),param_2 & 1);
        goto LAB_025a1f2c;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}


