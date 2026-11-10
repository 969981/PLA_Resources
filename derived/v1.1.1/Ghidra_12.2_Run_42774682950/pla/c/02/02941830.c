/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02941830; name: FUN_02941830
 */


long FUN_02941830(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((char)param_1[3] == '\0') {
    lVar3 = param_1[4];
  }
  else if ((*(char *)((long)param_1 + 0x19) == '\0') && (*(char *)((long)param_1 + 0x1a) == '\0')) {
    nn::os::GetSystemTick();
    lVar3 = nn::os::ConvertToTimeSpan();
    uVar2 = param_1[1];
    uVar4 = lVar3 - *param_1;
    uVar1 = ((long)uVar4 >> 0x20) * 0x26d694b3 + ((uVar4 & 0xffffffff) * 0x26d694b3 >> 0x20);
    uVar5 = ((long)uVar2 >> 0x20) * 0x26d694b3 + ((uVar2 & 0xffffffff) * 0x26d694b3 >> 0x20);
    lVar3 = ((param_1[4] + ((long)uVar4 >> 0x3f) + ((long)uVar2 >> 0x3f)) -
            ((long)(((long)uVar4 >> 0x20) * 0x112e0be8 + ((long)uVar1 >> 0x20) +
                   ((uVar4 & 0xffffffff) * 0x112e0be8 + (uVar1 & 0xffffffff) >> 0x20)) >> 0x1a)) -
            ((long)(((long)uVar2 >> 0x20) * 0x112e0be8 + ((long)uVar5 >> 0x20) +
                   ((uVar2 & 0xffffffff) * 0x112e0be8 + (uVar5 & 0xffffffff) >> 0x20)) >> 0x1a);
  }
  else {
    uVar5 = param_1[1];
    uVar1 = ((long)uVar5 >> 0x20) * 0x26d694b3 + ((uVar5 & 0xffffffff) * 0x26d694b3 >> 0x20);
    lVar3 = (param_1[4] + ((long)uVar5 >> 0x3f)) -
            ((long)(((long)uVar5 >> 0x20) * 0x112e0be8 + ((long)uVar1 >> 0x20) +
                   ((uVar5 & 0xffffffff) * 0x112e0be8 + (uVar1 & 0xffffffff) >> 0x20)) >> 0x1a);
  }
  return lVar3;
}


