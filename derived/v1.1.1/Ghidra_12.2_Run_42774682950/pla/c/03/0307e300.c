/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0307e300; name: FUN_0307e300
 */


ulong FUN_0307e300(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x19) == '\x02') {
    return 0xffffffff;
  }
  if (*(char *)(param_1 + 0x18) == '\x15') {
    uVar1 = (ulong)(*(byte *)(param_2 + 0xe) >> 5);
    plVar2 = (long *)(param_1 + uVar1 * 8 + 0x48);
    lVar3 = *plVar2;
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar3 + (long)plVar2;
    }
    if (*(char *)(lVar3 + 0x19) == '\x02') {
      return uVar1 << 0x1d | 0x1fffffff;
    }
  }
  return (ulong)*(uint *)(param_2 + 4);
}


