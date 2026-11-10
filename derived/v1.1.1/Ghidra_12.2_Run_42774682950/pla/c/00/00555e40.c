/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00555e40; name: FUN_00555e40
 */


/* WARNING: Removing unreachable block (ram,0x00555e9c) */

void FUN_00555e40(undefined8 param_1,long *param_2,int param_3,int param_4)

{
  uint *puVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  undefined8 *local_4a8;
  undefined1 *puStack_4a0;
  int *local_498;
  int *piStack_490;
  int local_488;
  int local_484;
  undefined1 auStack_480 [1020];
  int local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong local_68;
  
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  uStack_70 = 0;
  if (param_4 < param_3) {
    return;
  }
  bVar6 = false;
  local_484 = param_4;
  do {
    if (bVar6) {
      local_68 = 0;
      uStack_78 = 0;
      local_80 = 0;
      uStack_70 = 0;
    }
    local_68 = local_68 | 0x8000000000000000;
    bVar6 = false;
    local_84 = local_484;
    if (local_484 <= param_3) {
      return;
    }
    while( true ) {
      local_484 = local_484 + -1;
      if (local_484 == param_4) break;
      puVar1 = (uint *)(*param_2 + (long)local_484 * 8);
      if ((*puVar1 & 7) != 2) break;
      puStack_4a0 = auStack_480;
      local_4a8 = &local_80;
      local_498 = &local_488;
      piStack_490 = &local_484;
      local_488 = param_4;
      if ((*puVar1 & 7) != 2) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("(opcode()) == (kInstByteRange)","external/com_github_google_re2\\re2/prog.h",
                      0x57,"lo");
      }
      lVar2 = *param_2 + (long)local_484 * 8;
      bVar3 = *(byte *)(lVar2 + 4);
      bVar4 = *(byte *)(lVar2 + 5);
      FUN_00556034(&local_4a8,bVar3,bVar4);
      if ((*puVar1 & 7) != 2) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("(opcode()) == (kInstByteRange)","external/com_github_google_re2\\re2/prog.h",
                      0x59,"foldcase");
      }
      if (((0x60 < bVar4) && (bVar3 < 0x7b)) && ((*(ushort *)(lVar2 + 6) & 1) != 0)) {
        uVar5 = (uint)bVar3;
        if (uVar5 < 0x62) {
          uVar5 = 0x61;
        }
        uVar7 = (uint)bVar4;
        if (0x79 < bVar4) {
          uVar7 = 0x7a;
        }
        if (uVar5 <= uVar7) {
          FUN_00556034(&local_4a8,uVar5 - 0x20,uVar7 - 0x20);
        }
      }
      if (local_488 != param_4) {
        local_488 = local_488 - local_484;
        if (0x7ffe < local_488) {
          local_488 = 0x7fff;
        }
        *(ushort *)(lVar2 + 6) = *(ushort *)(lVar2 + 6) | (ushort)(local_488 << 1);
      }
      bVar6 = true;
      if (local_484 <= param_3) {
        return;
      }
    }
  } while( true );
}


