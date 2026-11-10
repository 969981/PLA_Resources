/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c5440; name: FUN_032c5440
 */


undefined8 * FUN_032c5440(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  do {
    local_80 = *param_3;
    uStack_78 = param_3[1];
    local_70 = param_3[2];
    uStack_68 = param_3[3];
    uVar2 = *(uint *)((long)param_1 + 0xc) & 0x3fffffff;
    local_60 = local_80;
    uStack_58 = uStack_78;
    local_50 = local_70;
    uStack_48 = uStack_68;
    uVar1 = FUN_032c4730(*param_1,uVar2,uVar2 - 1,param_2,&local_80);
    if (uVar1 < uVar2) {
LAB_032c54dc:
      FUN_032c4fd4(param_1,uVar1);
      return param_1;
    }
    if (*(int *)(param_1 + 0x12) == 0) {
      uVar1 = uVar2 - 1;
      goto LAB_032c54dc;
    }
    uVar2 = uVar2 * 2;
    if (uVar2 < 0x100) {
      uVar2 = 0xff;
    }
    if ((uVar1 & 0x80000000) != 0) {
      uVar1 = uVar2;
    }
    FUN_032c4fd4(param_1,uVar1);
  } while( true );
}


