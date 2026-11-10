/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0110c18c; name: FUN_0110c18c
 */


void FUN_0110c18c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)(param_2 + 1);
  puVar3 = (undefined8 *)(param_1 + 0x12de5);
  lVar4 = 100;
  do {
    if (*(char *)((long)puVar3 + -1) == '\0') {
      if (*(char *)((long)puVar2 + -1) != '\0') {
        uVar1 = *puVar2;
        uVar5 = puVar2[2];
        puVar3[1] = puVar2[1];
        puVar3[2] = uVar5;
        *puVar3 = uVar1;
        *(undefined1 *)((long)puVar3 + -1) = 1;
      }
    }
    else if (*(char *)((long)puVar2 + -1) == '\0') {
      *(undefined1 *)((long)puVar3 + -1) = 0;
    }
    else {
      uVar1 = *puVar2;
      uVar5 = puVar2[2];
      puVar3[1] = puVar2[1];
      puVar3[2] = uVar5;
      *puVar3 = uVar1;
    }
    lVar4 = lVar4 + -1;
    puVar2 = (undefined8 *)((long)puVar2 + 0x19);
    puVar3 = (undefined8 *)((long)puVar3 + 0x19);
  } while (lVar4 != 0);
  return;
}


