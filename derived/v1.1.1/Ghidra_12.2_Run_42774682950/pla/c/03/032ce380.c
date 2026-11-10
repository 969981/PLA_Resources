/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ce380; name: FUN_032ce380
 */


void FUN_032ce380(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
              (*(long **)(param_1 + 0x38),**(undefined8 **)(*(long *)(param_1 + 8) + 0x10),
               *(undefined8 *)(param_1 + 0x10));
    *(int *)(*(long *)(param_1 + 8) + 0x20) = *(int *)(*(long *)(param_1 + 8) + 0x20) + -1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
              (*(long **)(param_1 + 0x38),*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x10))
    ;
    *(int *)(*(long *)(param_1 + 8) + 0x20) = *(int *)(*(long *)(param_1 + 8) + 0x20) + -1;
  }
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(lVar2 + 0x18) = 0;
  if ((-1 < (int)*(uint *)(lVar2 + 0x1c)) && (*(long *)(lVar2 + 0x10) != 0)) {
    FUN_032cf244(uVar1,*(long *)(lVar2 + 0x10),8,*(uint *)(lVar2 + 0x1c) & 0x3fffffff);
  }
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined4 *)(lVar2 + 0x1c) = 0x80000000;
  plVar3 = *(long **)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(plVar3 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)plVar3 + 0xc)) && (*plVar3 != 0)) {
    FUN_032cf244(uVar1,*plVar3,0x18,*(uint *)((long)plVar3 + 0xc) & 0x3fffffff);
  }
  *plVar3 = 0;
  *(undefined4 *)((long)plVar3 + 0xc) = 0x80000000;
  FUN_032cf368(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 8),0x28,1);
  *(undefined8 *)(param_1 + 8) = 0;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x38);
    param_2[1] = *(undefined8 *)(param_1 + 0x40);
    param_2[2] = *(undefined8 *)(param_1 + 0x48);
  }
  return;
}


