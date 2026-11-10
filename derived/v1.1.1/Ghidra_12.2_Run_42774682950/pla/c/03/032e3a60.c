/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e3a60; name: FUN_032e3a60
 */


void FUN_032e3a60(char *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (param_1 == (char *)0x0) {
    param_1 = "unnamed";
  }
  FUN_032c5d4c(param_3,param_1,0xffffffff);
  if ((param_2 != 0) && (*(short *)(param_2 + 8) != 0)) {
    FUN_032c5d4c(param_3,&DAT_0398cc5d,0xffffffff);
    puVar1 = PTR_DAT_04389200;
    if (*(short *)(param_2 + 8) != 0) {
      uVar2 = 0;
      puVar3 = (undefined8 *)(param_2 + 0x10);
      while( true ) {
        if (*(char *)puVar3[1] == 't') {
          FUN_032e394c(&local_60,*puVar3);
          FUN_032e3a60(local_60,uStack_58,param_3);
        }
        else {
          local_68 = *puVar3;
          FUN_032c6910(param_3,&DAT_038ac0bd,puVar1,&local_68);
        }
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 2;
        if (*(ushort *)(param_2 + 8) <= uVar2) break;
        if (uVar2 != 0) {
          FUN_032c5d4c(param_3,&DAT_0398d5c8,0xffffffff);
        }
      }
    }
    FUN_032c5d4c(param_3,&DAT_0395c39f,0xffffffff);
  }
  return;
}


