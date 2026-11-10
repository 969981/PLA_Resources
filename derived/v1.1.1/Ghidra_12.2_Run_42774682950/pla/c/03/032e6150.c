/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e6150; name: FUN_032e6150
 */


int FUN_032e6150(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 local_28;
  
  pbVar3 = (byte *)param_1[1];
  bVar1 = *pbVar3;
  while ((bVar1 & 1) == 0) {
    pbVar3 = *(byte **)(pbVar3 + 8);
    bVar1 = *pbVar3;
  }
  iVar2 = -0x7ffbfe00;
  switch(*(uint *)(pbVar3 + 0x10) & 0x1f) {
  case 0:
  case 1:
  case 6:
  case 7:
  case 8:
    break;
  case 2:
    iVar2 = FUN_032e70ec(param_1);
    break;
  case 3:
    iVar2 = FUN_032e7184(param_1,*param_2,param_2[1]);
    break;
  case 4:
    iVar2 = FUN_032e721c(param_1);
    break;
  case 5:
    local_38 = *param_2;
    puStack_30 = (undefined *)param_2[1];
    iVar2 = FUN_03325240(&local_38,&local_40);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*(long *)(param_1[2] & 0xfffffffffffffffe) + 0x30))
                        (local_40,(long *)(param_1[2] & 0xfffffffffffffffe),*param_1,param_1[1]);
    }
    break;
  default:
    local_28 = 0;
    local_38 = 0;
    puStack_30 = PTR_DAT_04372528;
    FUN_03320b50(0x261011c5,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",
                 0x3b,"Bad var visitor switch",&local_38);
  }
  return iVar2;
}


