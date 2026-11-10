/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013f69b0; name: FUN_013f69b0
 */


void FUN_013f69b0(long param_1)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  
  *(undefined1 *)(param_1 + 0x38) = 1;
  puVar3 = *(ushort **)(*(long *)(param_1 + 0x10) + 0x250);
  uVar2 = *puVar3;
  *(ushort *)(param_1 + 0x3a) = uVar2;
  if (uVar2 == 0) {
    memset((void *)(param_1 + 0x40),0,0x71c);
    return;
  }
  puVar3 = puVar3 + 1;
  *(ushort **)(param_1 + 0x40) = puVar3;
  memset((void *)(param_1 + 0x48),0,0x714);
  uVar4 = 0;
  uVar5 = 0;
  if (uVar2 != 0) goto LAB_013f6a2c;
  do {
    uVar6 = 0;
LAB_013f6a10:
    lVar1 = uVar4 * 2;
    uVar4 = uVar4 + 1;
    *(short *)(param_1 + lVar1 + 0x48) = (short)uVar6;
    if (uVar4 == 0x38a) {
      return;
    }
  } while ((uint)uVar2 <= ((uint)uVar5 & 0xffff));
LAB_013f6a2c:
  uVar5 = uVar5 & 0xffff;
  puVar8 = puVar3 + uVar5 * 3;
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    if (uVar4 != *puVar8) break;
    uVar6 = (uint)uVar5;
    if ((uVar7 & 0xffff) != 0) {
      uVar6 = uVar7;
    }
    uVar5 = uVar5 + 1;
    puVar8 = puVar8 + 3;
    uVar7 = uVar6;
  } while ((uint)uVar2 != ((uint)uVar5 & 0xffff));
  goto LAB_013f6a10;
}


