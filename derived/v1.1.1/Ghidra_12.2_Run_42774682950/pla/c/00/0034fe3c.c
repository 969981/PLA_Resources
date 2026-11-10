/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034fe3c; name: FUN_0034fe3c
 */


undefined8 * FUN_0034fe3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar3 = (undefined8 *)FUN_003415f0(*(undefined8 *)(param_1 + 0x20),0xa0);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  puVar3[0xf] = 0;
  puVar3[0xe] = 0;
  puVar3[0x11] = 0;
  puVar3[0x10] = 0;
  puVar3[0x13] = 0;
  puVar3[0x12] = 0;
  uVar4 = FUN_00340fec(*(undefined8 *)(param_1 + 0x20),param_2);
  *puVar3 = uVar4;
  FUN_0032cfe0();
  puVar3[1] = PTR_DAT_043730c0;
  puVar3[2] = param_1;
  uVar4 = FUN_003b3f30();
  puVar3[0x11] = uVar4;
  puVar1 = PTR_DAT_04373bd8;
  if (((*PTR_DAT_04373bd0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04373bd0), iVar2 != 0))
  {
    lVar5 = FUN_002e2e80(PTR_FUN_04373078,0x160);
    if (lVar5 != 0) {
                    /* try { // try from 0034ff08 to 0034ff1f has its CatchHandler @ 0034ff34 */
      FUN_0033e07c(lVar5);
    }
    FUN_0031f0c0(PTR_FUN_04373be0,lVar5);
    *(long *)puVar1 = lVar5;
    __cxa_guard_release(PTR_DAT_04373bd0);
  }
  puVar3[0x12] = *(undefined8 *)puVar1;
  uVar4 = FUN_003bde90();
  puVar3[0x13] = uVar4;
  *(undefined2 *)(puVar3 + 8) = 0x101;
  *(undefined4 *)((long)puVar3 + 0x3c) = 0;
  return puVar3;
}


