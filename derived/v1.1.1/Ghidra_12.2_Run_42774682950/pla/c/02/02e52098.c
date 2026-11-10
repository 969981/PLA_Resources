/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e52098; name: FUN_02e52098
 */


void FUN_02e52098(undefined8 *param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  float fVar2;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_38;
  float local_34;
  
  if (*(uint *)(*(long *)(param_3 + 8) + 0x40) < 3) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 8) + 0x38) + 0x10);
  }
  local_50 = *(undefined4 *)(lVar1 + 0x78);
  uStack_4c = *(undefined4 *)(lVar1 + 0x7c);
  local_70 = *(undefined8 *)(lVar1 + 0x78);
  local_68 = *(undefined4 *)(lVar1 + 0x80);
  local_60 = *(undefined4 *)(lVar1 + 0x6c);
  local_5c = *(undefined4 *)(lVar1 + 0x70);
  uStack_58 = *(undefined4 *)(lVar1 + 0x74);
  uStack_64 = 0xffffffff;
  local_88 = *param_1;
  local_80 = *(undefined4 *)(param_1 + 1);
  local_7c = *(undefined8 *)((long)param_1 + 0xc);
  local_74 = *(undefined4 *)((long)param_1 + 0x14);
  local_38 = 0;
  local_34 = 100.0;
  local_48 = local_68;
  lVar1 = FUN_02e51048(param_1,&local_50);
  if (lVar1 != 0) {
    FUN_02e547ac(&local_98,lVar1,param_1[8],&local_50,*(undefined8 *)(param_3 + 0xa8));
    local_70 = local_98;
    local_68 = local_90;
    fVar2 = (float)FUN_02e543f0(lVar1,&local_50,&local_60);
    local_34 = 100.0 - fVar2 * 15.915494;
    if (*(long *)(param_3 + 0xa8) != param_1[8]) {
      local_34 = fVar2 * 15.915494;
    }
  }
  local_98 = 0;
  FUN_02e52200(0,param_1,param_2,*(undefined8 *)(*(long *)(param_3 + 8) + 0x48),&local_50,&local_98,
               &local_88,&local_34,&local_38,1,param_4);
  return;
}


