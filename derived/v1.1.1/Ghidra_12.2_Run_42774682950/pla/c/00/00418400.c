/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00418400; name: FUN_00418400
 */


bool FUN_00418400(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  time_t tVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long local_48;
  long local_38;
  
  local_38 = 0;
  local_48 = 0;
  if (*(ulong *)(param_1 + 0x60) < param_3) {
    uVar6 = 0x74;
    uVar5 = 299;
LAB_00418494:
    FUN_004014b0(0x24,0x6c,uVar6,"external/openssl/crypto/rand/drbg_lib.c",uVar5);
    uVar8 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x140) == 0) {
      uVar5 = 0x131;
      uVar6 = 0x80;
      goto LAB_00418494;
    }
    if (*(int *)(param_1 + 0x98) != 0) {
      uVar6 = 0x72;
      if (*(int *)(param_1 + 0x98) != 2) {
        uVar6 = 0x67;
      }
      uVar5 = 0x138;
      goto LAB_00418494;
    }
    iVar2 = *(int *)(param_1 + 0x30);
    uVar3 = *(ulong *)(param_1 + 0x40);
    uVar9 = *(ulong *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x98) = 2;
    if ((*(long *)(param_1 + 0x50) != 0) && (*(long *)(param_1 + 0x158) == 0)) {
      uVar3 = *(long *)(param_1 + 0x50) + uVar3;
      iVar7 = iVar2;
      if (iVar2 < 0) {
        iVar7 = iVar2 + 1;
      }
      iVar2 = iVar2 + (iVar7 >> 1);
      uVar9 = *(long *)(param_1 + 0x58) + uVar9;
    }
    iVar7 = *(int *)(param_1 + 0x88);
    if ((iVar7 != 0) && (bVar1 = iVar7 == -1, iVar7 = iVar7 + 1, bVar1)) {
      iVar7 = 1;
    }
    *(int *)(param_1 + 0x8c) = iVar7;
    if (*(code **)(param_1 + 0x148) == (code *)0x0) {
      uVar8 = 0;
      if (uVar3 == 0) goto LAB_0041857c;
    }
    else {
      uVar8 = (**(code **)(param_1 + 0x148))(param_1,&local_48,iVar2,uVar3,uVar9,0);
      if (uVar3 <= uVar8) {
LAB_0041857c:
        if (uVar8 <= uVar9) {
          if ((*(long *)(param_1 + 0x50) == 0) || (*(code **)(param_1 + 0x158) == (code *)0x0)) {
            uVar3 = 0;
          }
          else {
            iVar2 = *(int *)(param_1 + 0x30);
            if (iVar2 < 0) {
              iVar2 = iVar2 + 1;
            }
            uVar3 = (**(code **)(param_1 + 0x158))
                              (param_1,&local_38,iVar2 >> 1,*(long *)(param_1 + 0x50),
                               *(undefined8 *)(param_1 + 0x58));
            if ((uVar3 < *(ulong *)(param_1 + 0x50)) || (*(ulong *)(param_1 + 0x58) < uVar3)) {
              FUN_004014b0(0x24,0x6c,0x6f,"external/openssl/crypto/rand/drbg_lib.c",0x15e);
              goto joined_r0x004186ac;
            }
          }
          iVar2 = (*(code *)**(undefined8 **)(param_1 + 0x140))
                            (param_1,local_48,uVar8,local_38,uVar3,param_2,param_3);
          if (iVar2 == 0) {
            FUN_004014b0(0x24,0x6c,0x6c,"external/openssl/crypto/rand/drbg_lib.c",0x165);
          }
          else {
            *(undefined4 *)(param_1 + 0x98) = 1;
            *(undefined4 *)(param_1 + 0x70) = 1;
            tVar4 = time((time_t *)0x0);
            *(time_t *)(param_1 + 0x78) = tVar4;
            *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x8c);
          }
          goto joined_r0x004186ac;
        }
      }
    }
    FUN_004014b0(0x24,0x6c,0x6e,"external/openssl/crypto/rand/drbg_lib.c",0x156);
  }
  uVar3 = 0;
joined_r0x004186ac:
  if ((local_48 != 0) && (*(code **)(param_1 + 0x150) != (code *)0x0)) {
    (**(code **)(param_1 + 0x150))(param_1,local_48,uVar8);
  }
  if ((local_38 != 0) && (*(code **)(param_1 + 0x160) != (code *)0x0)) {
    (**(code **)(param_1 + 0x160))(param_1,local_38,uVar3);
  }
  return *(int *)(param_1 + 0x98) == 1;
}


