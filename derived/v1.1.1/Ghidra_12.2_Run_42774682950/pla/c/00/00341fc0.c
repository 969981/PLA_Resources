/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00341fc0; name: FUN_00341fc0
 */


undefined8 * FUN_00341fc0(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (((DAT_04399ac0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04399ac0), iVar1 != 0)) {
                    /* try { // try from 00341ffc to 003420a3 has its CatchHandler @ 003420b8 */
    uVar2 = FUN_00342190();
    puVar3 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x48);
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x20);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = 0;
        *puVar4 = 0;
        puVar4[3] = 0;
        puVar4[2] = 0;
        *(undefined2 *)puVar4 = 1;
        *(undefined1 *)((long)puVar4 + 2) = 0;
      }
      *puVar3 = puVar4;
      puVar3[1] = uVar2;
      puVar3[2] = 0;
      puVar3[3] = 0;
      lVar5 = FUN_002e2e80(PTR_FUN_04373078,0x1f8);
      if (lVar5 != 0) {
        FUN_0033bcec(lVar5);
      }
      puVar3[7] = 0;
      puVar3[4] = lVar5;
      *(undefined1 *)(puVar3 + 5) = 1;
      puVar3[8] = 0;
      *(undefined4 *)((long)puVar3 + 0x29) = 0;
      puVar3[6] = puVar3 + 7;
    }
    *(undefined2 *)(puVar3 + 5) = 0x100;
    FUN_0031f0c0(PTR_LAB_04373b70,puVar3);
    DAT_04399ab8 = puVar3;
    __cxa_guard_release(&DAT_04399ac0);
  }
  return DAT_04399ab8;
}


