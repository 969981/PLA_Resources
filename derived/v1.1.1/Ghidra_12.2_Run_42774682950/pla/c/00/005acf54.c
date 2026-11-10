/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005acf54; name: FUN_005acf54
 */


void FUN_005acf54(undefined8 *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  puVar2 = PTR_LAB_04373088;
  if (param_1 != (undefined8 *)0x0) {
    pcVar1 = DAT_0439eff8;
    if (param_2 == 0) {
      do {
        if (DAT_0439eff8 != (code *)0x0) {
          (*DAT_0439eff8)(*param_1,0,param_3);
        }
        puVar3 = (undefined8 *)param_1[1];
        FUN_002e2ea0(puVar2,param_1);
        param_1 = puVar3;
      } while (puVar3 != (undefined8 *)0x0);
    }
    else {
      do {
        DAT_0439eff8 = pcVar1;
        if (pcVar1 != (code *)0x0) {
          *(int *)(param_2 + 0x3c0) = (int)param_1[2];
          (*pcVar1)(*param_1,param_2,param_3);
        }
        puVar3 = (undefined8 *)param_1[1];
        FUN_002e2ea0(puVar2,param_1);
        param_1 = puVar3;
        pcVar1 = DAT_0439eff8;
      } while (puVar3 != (undefined8 *)0x0);
    }
  }
  return;
}


