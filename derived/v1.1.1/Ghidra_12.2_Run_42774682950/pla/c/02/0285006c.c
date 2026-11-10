/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0285006c; name: FUN_0285006c
 */


uint FUN_0285006c(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined8 local_48;
  undefined1 auStack_40 [16];
  
  piVar6 = (int *)*param_2;
  if ((((piVar6 == (int *)0x0) || (*(int *)(param_2 + 1) == -1)) ||
      (*(ushort *)((long)piVar6 - (long)*piVar6) < 5)) ||
     (((ushort *)((long)piVar6 - (long)*piVar6))[2] == 0)) {
    uVar2 = 0;
    uVar1 = 0;
    uVar3 = 0;
    uVar5 = 0xff000000;
  }
  else {
    local_48 = 0xaf66cf4c8606ef75;
    FUN_010868dc(auStack_40,param_2,&local_48);
    uVar1 = FUN_01086a70(auStack_40,0);
    local_48 = 0xaf66ba4c8606cbc6;
    FUN_010868dc(auStack_40,param_2,&local_48);
    uVar2 = FUN_01086a70(auStack_40,0);
    local_48 = 0xaf66bf4c8606d445;
    FUN_010868dc(auStack_40,param_2,&local_48);
    uVar3 = FUN_01086a70(auStack_40,0);
    local_48 = 0xaf66bc4c8606cf2c;
    FUN_010868dc(auStack_40,param_2,&local_48);
    iVar4 = FUN_01086a70(auStack_40,0);
    uVar5 = iVar4 << 0x18;
    uVar3 = (uVar3 & 0xff) << 0x10;
    uVar2 = (uVar2 & 0xff) << 8;
    uVar1 = uVar1 & 0xff;
  }
  return uVar1 | uVar2 | uVar3 | uVar5;
}


