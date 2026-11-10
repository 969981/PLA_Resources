/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058bb90; name: FUN_0058bb90
 */


long * FUN_0058bb90(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = FUN_0057b730();
  if ((uVar1 & 1) == 0) {
    return (long *)0x0;
  }
  plVar2 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x30);
  if (plVar2 != (long *)0x0) {
    *plVar2 = (long)(PTR_DAT_04374e70 + 0x10);
    plVar2[1] = 0;
    plVar2[2] = 1;
    plVar2[3] = (long)&DAT_039729a9;
    lVar3 = FUN_0058bc30(param_1);
    plVar2[4] = lVar3;
    lVar3 = FUN_002ec2d0("metadata.google.internal.:8080");
    plVar2[5] = lVar3;
    FUN_0058bcc0(plVar2[4] + 8);
  }
  return plVar2;
}


