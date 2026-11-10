/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e61160; name: FUN_02e61160
 */


uint FUN_02e61160(long param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  uVar3 = 0x811c9dc5;
  if (*(uint *)(param_1 + 0x40) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 0x40) << 5;
    plVar1 = (long *)(*(long *)(param_1 + 0x38) + 0x18);
    lVar6 = *plVar1;
    while( true ) {
      if (lVar6 == 0) {
        lVar6 = plVar1[-1];
      }
      uVar5 = (uint)lVar6;
      uVar2 = (uint)((ulong)lVar6 >> 0x20);
      uVar3 = (((((((uVar5 & 0xff ^ uVar3 * 0x1000193) * 0x1000193 ^ uVar5 >> 8 & 0xff) * 0x1000193
                  ^ uVar5 >> 0x10 & 0xff) * 0x1000193 ^ uVar5 >> 0x18) * 0x1000193 ^ uVar2 & 0xff) *
                0x1000193 ^ uVar2 >> 8 & 0xff) * 0x1000193 ^ (ushort)((ulong)lVar6 >> 0x30) & 0xff)
              * 0x1000193 ^ (uint)(byte)((ulong)lVar6 >> 0x38);
      lVar4 = lVar4 + -0x20;
      plVar1 = plVar1 + 4;
      if (lVar4 == 0) break;
      lVar6 = *plVar1;
    }
  }
  return uVar3;
}


