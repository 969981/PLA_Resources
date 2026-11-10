/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec903c; name: FUN_02ec903c
 */


int FUN_02ec903c(void)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  DAT_0440a798 = 0;
  DAT_0440a7c8 = 0;
  DAT_042aa0f0 = 1;
  DAT_0440a7cc = 0;
  nn::os::InitializeEvent(&DAT_0440a7a0,0,1);
  FUN_02e717c0(&LAB_02ec91b8,0,&DAT_0440a4c0,&DAT_0440a5c0,"AK Suspended");
  if (DAT_0440a600 == '\0') {
    iVar2 = 2;
  }
  else {
    FUN_02ec9278(1,0);
    local_30 = 0;
    uStack_28 = 0;
    puVar3 = (undefined8 *)FUN_02f59e30(0,0x168);
    if (puVar3 == (undefined8 *)0x0) {
      iVar2 = 0x34;
    }
    else {
      FUN_02ec7db4(puVar3,&local_30,0,1,1);
      iVar2 = FUN_02ec8b50(puVar3,1);
      if (iVar2 == 1) {
        iVar2 = FUN_02ec84ec(puVar3);
        if (iVar2 == 1) {
          puVar3[1] = 0;
          plVar1 = &DAT_0440a7e0;
          if (DAT_0440a7e0 != 0) {
            plVar1 = DAT_0440a7d8 + 1;
          }
          *plVar1 = (long)puVar3;
          DAT_0440a7d0 = DAT_0440a7d0 + 1;
          DAT_0440a7d8 = puVar3;
        }
        else {
          (**(code **)*puVar3)(puVar3);
          FUN_02f59e60(0,puVar3);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3);
        FUN_02f59e60(0,puVar3);
        iVar2 = 0x34;
      }
    }
  }
  return iVar2;
}


