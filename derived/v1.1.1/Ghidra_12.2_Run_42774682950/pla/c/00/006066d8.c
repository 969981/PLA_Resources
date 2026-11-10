/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006066d8; name: FUN_006066d8
 */


long FUN_006066d8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  
  lVar3 = FUN_002e2e80(PTR_FUN_04373078,0x90);
  if (lVar3 != 0) {
    puStack_48 = (undefined8 *)param_3[1];
    local_50 = (undefined8 *)*param_3;
    uVar4 = *param_2;
    local_40 = param_3[2];
    param_3[2] = 0;
    *param_3 = 0;
    param_3[1] = 0;
                    /* try { // try from 00606728 to 00606737 has its CatchHandler @ 006067cc */
    FUN_00603f84(lVar3,param_1,uVar4,&local_50);
    puVar2 = local_50;
    puVar1 = PTR_LAB_04373088;
    if (local_50 != (undefined8 *)0x0) {
      if (puStack_48 != local_50) {
        puVar6 = puStack_48 + -1;
        puVar5 = (undefined8 *)*puVar6;
        *puVar6 = 0;
        if (puVar5 != (undefined8 *)0x0) goto LAB_00606774;
        while (puVar2 != puVar6) {
          while( true ) {
            puVar6 = puVar6 + -1;
            puVar5 = (undefined8 *)*puVar6;
            *puVar6 = 0;
            if (puVar5 == (undefined8 *)0x0) break;
LAB_00606774:
            (**(code **)*puVar5)(puVar5);
            FUN_002e2ea0(puVar1,puVar5);
            if (puVar2 == puVar6) goto LAB_006067a4;
          }
        }
      }
LAB_006067a4:
      puStack_48 = puVar2;
      FUN_002e2ea0(PTR_LAB_04373088,local_50);
    }
  }
  return lVar3;
}


