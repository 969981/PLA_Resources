/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d6af0; name: FUN_031d6af0
 */


void FUN_031d6af0(long param_1,int *param_2,int *param_3,int *param_4,int *param_5,
                 undefined4 *param_6,undefined4 *param_7,undefined8 param_8,int *param_9,
                 int *param_10,long param_11)

{
  long lVar1;
  int iVar2;
  undefined4 local_a0 [2];
  int local_98 [2];
  undefined4 local_90 [2];
  int local_88 [2];
  undefined4 local_80 [2];
  undefined4 local_78 [2];
  int local_70 [2];
  int local_68 [2];
  
  FUN_033299e0(0x58477f9);
  if (param_2 != param_3) {
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)*param_2 * 0x10;
      if ((int)*(short *)(lVar1 + 10) + (int)*(short *)(lVar1 + 8) < 0x17) {
        FUN_031d6d3c(param_1,param_1 + 0x10,param_2,lVar1,param_11);
      }
      else {
        FUN_031d71bc(param_1,param_1 + 0x30,param_2,lVar1,param_11);
      }
      FUN_033299e0(0x9135a17c);
      param_2 = param_2 + 0xc;
    } while (param_3 != param_2);
  }
  if (param_4 != param_5) {
    do {
      iVar2 = *param_4;
      lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)iVar2 * 0x10;
      if ((int)*(short *)(lVar1 + 10) + (int)*(short *)(lVar1 + 8) < 0x17) {
        local_68[0] = iVar2;
        FUN_031d7aa8(param_1,param_1 + 0x10,local_68,lVar1,param_11);
      }
      else {
        local_70[0] = iVar2;
        FUN_031d7ea8(param_1,param_1 + 0x30,local_70,lVar1,param_11);
      }
      FUN_033299e0(0x57f819de);
      param_4 = param_4 + 1;
    } while (param_5 != param_4);
  }
  for (; param_6 != param_7; param_6 = param_6 + 1) {
    local_78[0] = *param_6;
    local_80[0] = 0xffffffff;
    FUN_031d85f8(param_1,local_78,local_80,param_11);
  }
  if (param_9 != param_10) {
    do {
      iVar2 = *param_9;
      lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)iVar2 * 0x10;
      if ((int)*(short *)(lVar1 + 10) + (int)*(short *)(lVar1 + 8) < 0x17) {
        local_90[0] = 0xffffffff;
        local_88[0] = iVar2;
        FUN_031d8674(param_1,param_1 + 0x10,local_88,local_90,param_11);
      }
      else {
        local_a0[0] = 0xffffffff;
        local_98[0] = iVar2;
        FUN_031d8710(param_1,param_1 + 0x30,local_98,local_a0,param_11);
      }
      param_9 = param_9 + 1;
    } while (param_10 != param_9);
  }
  FUN_031d9ae0(param_11);
  FUN_031d9d80(param_11 + 0x10);
  return;
}


