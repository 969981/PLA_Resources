/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fd2e4; name: FUN_001fd2e4
 */


void FUN_001fd2e4(long *param_1)

{
  long *plVar1;
  uint uVar2;
  
  if ((*(byte *)(*param_1 + 0xf43) >> 2 & 1) == 0) {
    return;
  }
  uVar2 = *(uint *)((long)param_1 + 0x3fc);
  plVar1 = param_1 + 0x1b;
  if ((uVar2 & 4) != 0) {
    plVar1 = param_1 + 0x21;
  }
  if ((uVar2 & 0x20) != 0) {
    plVar1 = param_1 + 0x2d;
  }
  if ((uVar2 & 0x40) != 0) {
    plVar1 = param_1 + 0x25;
  }
  FUN_001f3934(*param_1,"Connected to %s (%s) port %ld (#%ld)\n",*plVar1,param_1 + 0x11,
               param_1[0x32],param_1[0xc]);
  return;
}


