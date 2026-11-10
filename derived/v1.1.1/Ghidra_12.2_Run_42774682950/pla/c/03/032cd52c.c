/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cd52c; name: FUN_032cd52c
 */


bool FUN_032cd52c(long param_1,int param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (param_2 < 1) {
    param_2 = 0;
LAB_032cd5d8:
    *param_3 = param_2;
    bVar1 = *(long *)(param_1 + 0x10) == 0;
  }
  else {
    iVar4 = 0;
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    if (puVar3 != (undefined8 *)0x0) goto LAB_032cd57c;
LAB_032cd5b0:
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    if (puVar3 != (undefined8 *)0x0) {
      iVar2 = FUN_032cd27c(param_1,puVar3);
      if (iVar2 == 0) goto LAB_032cd564;
      *(undefined8 *)(param_1 + 0x18) = *puVar3;
      do {
        *puVar3 = *(undefined8 *)(param_1 + 0x20);
        *(undefined8 **)(param_1 + 0x20) = puVar3;
        while( true ) {
          iVar4 = iVar4 + 1;
          if (param_2 == iVar4) goto LAB_032cd5d8;
          puVar3 = *(undefined8 **)(param_1 + 0x10);
          if (puVar3 == (undefined8 *)0x0) goto LAB_032cd5b0;
LAB_032cd57c:
          puVar3 = (undefined8 *)*puVar3;
          if (puVar3 == (undefined8 *)0x0) goto LAB_032cd5fc;
          iVar2 = FUN_032cd27c(param_1,puVar3);
          if (iVar2 != 0) break;
LAB_032cd564:
          *(undefined8 **)(param_1 + 0x10) = puVar3;
        }
        **(undefined8 **)(param_1 + 0x10) = *puVar3;
      } while( true );
    }
LAB_032cd5fc:
    *param_3 = iVar4;
    bVar1 = true;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return bVar1;
}


