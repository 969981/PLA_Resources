/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e5b00; name: FUN_032e5b00
 */


void FUN_032e5b00(long param_1,byte *param_2,byte *param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  undefined8 local_190 [42];
  ushort local_38 [2];
  undefined2 local_34 [2];
  
  iVar3 = FUN_032e2120(*(undefined8 *)(param_1 + 8));
  iVar4 = 9;
  if (iVar3 != 4) {
    iVar4 = 0x11;
  }
  local_34[0] = 0x3f;
  if (param_2 == param_3) {
    local_34[0] = 0x67;
LAB_032e5bcc:
    FUN_032c4d7c(param_4,&DAT_039b957d,0xffffffff);
  }
  else {
    bVar7 = *param_2;
    uVar1 = bVar7 - 0x45;
    if (uVar1 < 0x23) {
      if ((1L << ((ulong)uVar1 & 0x3f) & 0x500000005U) == 0) {
        if ((1L << ((ulong)uVar1 & 0x3f) & 0x200000002U) == 0) goto LAB_032e5c30;
        bVar7 = 0x66;
      }
    }
    else {
LAB_032e5c30:
      local_38[0] = (ushort)bVar7;
      if ((DAT_0444a640 != '\0') || (uVar5 = FUN_03327170(), (uVar5 & 1) != 0)) {
        uVar5 = FUN_03327170();
        if ((uVar5 & 1) == 0) {
          FUN_03326994(local_190,&DAT_0444a5f0,1);
          lVar6 = FUN_03326338(local_190,
                               "Invalid floating-point extra format specififer \'{}\'. Expected a character among [EfFfGg]."
                               ,&DAT_0434bad8,local_38);
          *(char **)(lVar6 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Core/hkReflectVar.cpp"
          ;
          *(undefined8 *)(lVar6 + 0x40) = 0xdd;
          FUN_033269dc(local_190);
        }
        else {
          FUN_03326a7c(local_190,&DAT_0444a5f0,1);
          lVar6 = FUN_03326338(local_190,
                               "Invalid floating-point extra format specififer \'{}\'. Expected a character among [EfFfGg]."
                               ,&DAT_0434bad8,local_38);
          *(char **)(lVar6 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Core/hkReflectVar.cpp"
          ;
          *(undefined8 *)(lVar6 + 0x40) = 0xdd;
          FUN_03326adc(local_190);
        }
      }
      bVar7 = 0x67;
    }
    local_34[0] = CONCAT11(local_34[0]._1_1_,bVar7);
    iVar3 = (int)param_3 - (int)param_2;
    iVar2 = iVar3 + -1;
    if (iVar2 == 0 || iVar3 < 1) goto LAB_032e5bcc;
    FUN_032c4de0(local_190,param_2 + 1,iVar2);
    iVar4 = FUN_032c4920(local_190[0],10);
    FUN_032c4ce8(local_190);
    FUN_032c4d7c(param_4,&DAT_039b957d,0xffffffff);
    if (iVar4 < 0) goto LAB_032e5bf4;
  }
  FUN_032c5500(param_4,&DAT_039b0182,iVar4);
LAB_032e5bf4:
  FUN_032c55f0(param_4,local_34);
  return;
}


