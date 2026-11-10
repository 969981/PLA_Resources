/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00212a14; name: FUN_00212a14
 */


undefined8 FUN_00212a14(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar2 = PTR_DAT_04372808;
  puVar3 = PTR_DAT_04372808 + 0x68;
  *(undefined4 *)PTR_DAT_04372808 = 2;
  nnosSignalEvent(puVar3);
  do {
    nnosWaitEvent(puVar2 + 0x10);
    nnosLockMutex(puVar2 + 0x38);
    *(undefined4 *)puVar2 = 3;
    puVar1 = (undefined8 *)**(long **)(puVar2 + 0x60);
    while (puVar1 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)puVar1[2];
      uVar6 = *puVar1;
      nnosUnlockMutex(puVar2 + 0x38);
      nnosWaitThread(uVar6);
      nnosLockMutex(puVar2 + 0x38);
      FUN_001e3790(*(undefined8 *)(puVar2 + 0x60),puVar1,0);
      puVar1 = puVar7;
    }
    if (*(int *)(puVar2 + 4) == 0) {
      lVar4 = FUN_001e3860(*(undefined8 *)(puVar2 + 0x58));
      lVar5 = FUN_001e3860(*(undefined8 *)(puVar2 + 0x60));
      if (lVar4 + lVar5 == 0) {
        *(undefined4 *)puVar2 = 4;
        nnosUnlockMutex(puVar2 + 0x38);
        return 0;
      }
    }
    nnosUnlockMutex(puVar2 + 0x38);
  } while( true );
}


