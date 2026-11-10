/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002365c8; name: FUN_002365c8
 */


long FUN_002365c8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)PTR_DAT_04372ba8)(0x140,4,*(undefined8 *)PTR_DAT_04372bb8);
  if (lVar2 != 0) {
    *(long *)lVar2 = lVar2;
    *(long *)(lVar2 + 8) = lVar2;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(long *)(lVar2 + 0x28) = lVar2 + 0x28;
    *(long *)(lVar2 + 0x30) = lVar2 + 0x28;
    *(long *)(lVar2 + 0x38) = lVar2 + 0x38;
    puVar1 = PTR_DAT_04372bf8 + 0x10;
    *(undefined4 *)(lVar2 + 0xaf) = 0;
    *(undefined8 *)(lVar2 + 0xe8) = 0;
    *(undefined4 *)(lVar2 + 0xef) = 0;
    *(undefined4 *)(lVar2 + 0x128) = 0;
    *(long *)(lVar2 + 0x40) = lVar2 + 0x38;
    *(undefined **)(lVar2 + 0x48) = puVar1;
    *(long *)(lVar2 + 0x70) = lVar2 + 0x70;
    *(long *)(lVar2 + 0x78) = lVar2 + 0x70;
    *(undefined8 *)(lVar2 + 0x80) = 0;
    *(long *)(lVar2 + 0x88) = lVar2 + 0x88;
    *(long *)(lVar2 + 0x90) = lVar2 + 0x88;
    *(undefined8 *)(lVar2 + 0x98) = 0;
    *(long *)(lVar2 + 200) = lVar2 + 200;
    *(long *)(lVar2 + 0xd0) = lVar2 + 200;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    *(undefined8 *)(lVar2 + 0x60) = 0;
    *(undefined8 *)(lVar2 + 0x68) = 0;
    *(undefined8 *)(lVar2 + 0xa0) = 0;
    *(undefined8 *)(lVar2 + 0xa8) = 0;
    *(undefined8 *)(lVar2 + 0xb8) = 0;
    *(undefined8 *)(lVar2 + 0xc0) = 0;
    *(undefined8 *)(lVar2 + 0xd8) = 0;
    *(undefined8 *)(lVar2 + 0xe0) = 0;
    *(undefined8 *)(lVar2 + 0xf8) = 0;
    *(undefined8 *)(lVar2 + 0x100) = 0;
    *(undefined8 *)(lVar2 + 0x108) = 0;
    *(undefined8 *)(lVar2 + 0x110) = 0;
    *(long *)(lVar2 + 0x130) = lVar2 + 0x130;
    *(long *)(lVar2 + 0x138) = lVar2 + 0x130;
    *(undefined2 *)(lVar2 + 0x10d) = 0;
    *(undefined1 *)(lVar2 + 0xb0) = 1;
    *(undefined1 *)(lVar2 + 0xf0) = 1;
  }
  FUN_00236c18(param_1,lVar2,param_2);
  FUN_00237018(lVar2,*param_1,param_1[1],param_2);
  FUN_00237358(param_1,lVar2,param_2);
  FUN_002375a8(param_1,lVar2,param_2);
  *(uint *)(lVar2 + 0x128) = (uint)*(byte *)(param_2 + 0x60);
  if (*(char *)(param_2 + 0x40) != '\0') {
    uVar3 = (**(code **)(**(long **)(param_1[1] + 0x18) + 0x78))
                      (*(long **)(param_1[1] + 0x18),(char *)(param_2 + 0x40),1);
    *(undefined8 *)(lVar2 + 0x110) = uVar3;
  }
  FUN_002379d4(lVar2);
  return lVar2;
}


