/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002128ec; name: FUN_002128ec
 */


undefined * FUN_002128ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_04372808;
  if (*(int *)PTR_DAT_04372808 == 0) {
    *(undefined4 *)PTR_DAT_04372808 = 1;
    *(int *)(puVar2 + 4) = *(int *)(puVar2 + 4) + 1;
    lVar3 = FUN_00212738(0x4000,PTR_FUN_04372818,0);
    *(long *)(puVar2 + 8) = lVar3;
    if (lVar3 != 0) {
      lVar3 = FUN_002044c4(0x20);
      *(long *)(puVar2 + 0x58) = lVar3;
      if (lVar3 != 0) {
        FUN_001e370c(lVar3,&DAT_00212af8);
        lVar4 = FUN_002044c4(0x20);
        *(long *)(puVar2 + 0x60) = lVar4;
        lVar3 = 0;
        if (lVar4 != 0) {
          FUN_001e370c(lVar4,&LAB_00212afc);
          nnosInitializeMutex(puVar2 + 0x38,1,0);
          nnosInitializeEvent(puVar2 + 0x10,0,1);
          puVar1 = puVar2 + 0x68;
          nnosInitializeEvent(puVar1,0,1);
          nnosStartThread(*(undefined8 *)(puVar2 + 8));
          nnosWaitEvent(puVar1);
          nnosFinalizeEvent(puVar1);
          return puVar2;
        }
        goto LAB_0021290c;
      }
    }
  }
  lVar3 = *(long *)(puVar2 + 0x60);
LAB_0021290c:
  if (lVar3 != 0) {
    FUN_001e381c(lVar3,0);
  }
  if (*(long *)(puVar2 + 0x58) != 0) {
    FUN_001e381c(*(long *)(puVar2 + 0x58),0);
  }
  if (*(long *)(puVar2 + 8) != 0) {
    FUN_002128ac();
  }
  *(undefined4 *)puVar2 = 0;
  memset(puVar2 + 0x10,0,0x58);
  return (undefined *)0x0;
}


