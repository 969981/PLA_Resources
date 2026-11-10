/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00542798; name: FUN_00542798
 */


void FUN_00542798(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar2 = DAT_0439ecd0;
  puVar1 = PTR_LAB_04373088;
  if (DAT_0439ecd0 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*DAT_0439ecd0;
    if (puVar4 != (undefined8 *)0x0) {
      if ((undefined8 *)DAT_0439ecd0[1] == puVar4) {
        puVar3 = puVar4;
      }
      else {
        puVar5 = (undefined8 *)DAT_0439ecd0[1] + -1;
        puVar3 = (undefined8 *)*puVar5;
        *puVar5 = 0;
        if (puVar3 != (undefined8 *)0x0) goto LAB_005427f0;
        while (puVar4 != puVar5) {
          while( true ) {
            puVar5 = puVar5 + -1;
            puVar3 = (undefined8 *)*puVar5;
            *puVar5 = 0;
            if (puVar3 == (undefined8 *)0x0) break;
LAB_005427f0:
            (**(code **)*puVar3)(puVar3);
            FUN_002e2ea0(puVar1,puVar3);
            if (puVar4 == puVar5) goto LAB_00542814;
          }
        }
LAB_00542814:
        puVar3 = (undefined8 *)*puVar2;
      }
      puVar2[1] = puVar4;
      FUN_002e2ea0(PTR_LAB_04373088,puVar3);
    }
    FUN_002e2ea0(PTR_LAB_04373088,puVar2);
  }
  DAT_0439ecd0 = (undefined8 *)0x0;
  return;
}


