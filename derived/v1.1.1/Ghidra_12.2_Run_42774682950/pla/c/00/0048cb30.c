/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0048cb30; name: FUN_0048cb30
 */


undefined8
FUN_0048cb30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,char param_6,undefined8 param_7,ulong param_8)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  byte local_250 [55];
  byte local_219;
  undefined1 local_218;
  undefined1 auStack_217 [207];
  undefined1 local_148;
  undefined1 local_147;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 local_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  undefined1 auStack_d0 [56];
  undefined1 auStack_98 [56];
  
  lVar2 = FUN_00444930();
  uStack_df = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_e7 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  if (lVar2 == 0) {
    return 0;
  }
  iVar1 = FUN_0048c9d0(local_250,0x72,param_2);
  if (iVar1 != 0) {
    local_250[0] = local_250[0] & 0xfc;
    local_219 = local_219 | 0x80;
    local_218 = 0;
    FUN_004933f0(auStack_98,local_250,0x39);
    if (param_8 < 0x100) {
      local_148 = param_6 != '\0';
      local_147 = (char)param_8;
      uVar3 = FUN_0048d3e0();
      iVar1 = FUN_004449b0(lVar2,uVar3,0);
      if ((((iVar1 != 0) && (iVar1 = FUN_00444ad0(lVar2,"SigEd448",8), iVar1 != 0)) &&
          (iVar1 = FUN_00444ad0(lVar2,&local_148,2), iVar1 != 0)) &&
         (((iVar1 = FUN_00444ad0(lVar2,param_7,param_8), iVar1 != 0 &&
           (iVar1 = FUN_00444ad0(lVar2,auStack_217,0x39), iVar1 != 0)) &&
          (iVar1 = FUN_00444ad0(lVar2,param_4,param_5), iVar1 != 0)))) {
        FUN_004006a0(local_250,0x72);
        iVar1 = FUN_00444c20(lVar2,local_250,0x72);
        if (iVar1 != 0) {
          FUN_004933f0(auStack_d0,local_250,0x72);
          FUN_004006a0(local_250,0x72);
          FUN_004939d0(&local_148,auStack_d0);
          FUN_004939d0(&local_148,&local_148);
          FUN_0048e140(local_250,*(undefined8 *)PTR_PTR_04374508,&local_148);
          FUN_0048f980(&local_110,local_250);
          FUN_0048fbc0(local_250);
          FUN_004933e0(&local_148);
          local_148 = param_6 != '\0';
          local_147 = (char)param_8;
          uVar3 = FUN_0048d3e0();
          iVar1 = FUN_004449b0(lVar2,uVar3,0);
          if (((iVar1 != 0) && (iVar1 = FUN_00444ad0(lVar2,"SigEd448",8), iVar1 != 0)) &&
             ((iVar1 = FUN_00444ad0(lVar2,&local_148,2), iVar1 != 0 &&
              ((((iVar1 = FUN_00444ad0(lVar2,param_7,param_8), iVar1 != 0 &&
                 (iVar1 = FUN_00444ad0(lVar2,&local_110,0x39), iVar1 != 0)) &&
                (iVar1 = FUN_00444ad0(lVar2,param_3,0x39), iVar1 != 0)) &&
               ((iVar1 = FUN_00444ad0(lVar2,param_4,param_5), iVar1 != 0 &&
                (iVar1 = FUN_00444c20(lVar2,local_250,0x72), iVar1 != 0)))))))) {
            FUN_004933f0(&local_148,local_250,0x72);
            FUN_004006a0(local_250,0x72);
            FUN_00492610(&local_148,&local_148,auStack_98);
            FUN_00492c00(&local_148,&local_148,auStack_d0);
            FUN_004006a0(param_1,0x72);
            *(undefined8 *)((long)param_1 + 0x31) = uStack_df;
            *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_e0,local_e7);
            param_1[3] = uStack_f8;
            param_1[2] = local_100;
            param_1[5] = CONCAT71(local_e7,uStack_e8);
            param_1[4] = uStack_f0;
            param_1[1] = uStack_108;
            *param_1 = local_110;
            FUN_00493790((long)param_1 + 0x39,&local_148);
            FUN_004933e0(auStack_98);
            FUN_004933e0(auStack_d0);
            FUN_004933e0(&local_148);
            uVar3 = 0xffffffff;
            goto LAB_0048ce48;
          }
        }
        goto LAB_0048ce44;
      }
    }
    FUN_004006a0(local_250,0x72);
  }
LAB_0048ce44:
  uVar3 = 0;
LAB_0048ce48:
  FUN_00444950(lVar2);
  return uVar3;
}


