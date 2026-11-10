/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0059ab90; name: FUN_0059ab90
 */


void FUN_0059ab90(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *local_40;
  undefined4 local_38;
  
  FUN_0059a890();
  if (*(long *)(param_2 + 0x1c0) == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x201) == '\0') {
    return;
  }
  if (*(char *)(param_2 + 0x200) == '\0') {
    return;
  }
  if (((*(char *)(param_2 + 0x203) == '\0') && (*(char *)(param_1 + 0xcf0) != '\0')) ||
     (FUN_00305050(param_2 + 0x6a8), *(char *)(param_2 + 0x7d8) != '\0')) {
    if (*(char *)(param_2 + 0x7d8) == '\0') goto LAB_0059abec;
LAB_0059ac14:
    bVar3 = true;
    cVar2 = *(char *)(param_2 + 0x201);
  }
  else {
    FUN_00305050(param_2 + 0x7e8);
    if (*(char *)(param_2 + 0x7d8) != '\0') goto LAB_0059ac14;
LAB_0059abec:
    bVar3 = *(long *)(param_2 + 0x808) != 0;
    cVar2 = *(char *)(param_2 + 0x201);
  }
  if (cVar2 == '\0') {
    return;
  }
  uVar6 = *(ulong *)(param_2 + 0x6c8);
  if (!bVar3 && uVar6 != 0) {
    if (*(char *)(param_2 + 0x203) == '\0') {
      if (*(long *)(param_2 + 0x1c0) != 0) {
        lVar1 = param_2 + 0x6a8;
        if (*(int *)(param_2 + 0xb34) != 1) {
          lVar4 = *(long *)(param_2 + 0xc88);
          if (lVar4 == 0) {
            lVar4 = FUN_005a2b60(*(int *)(param_2 + 0xb34));
            *(long *)(param_2 + 0xc88) = lVar4;
          }
          uVar6 = FUN_005a2b50(lVar4,lVar1,param_2 + 0x7e8,0,5,&local_40);
          if ((uVar6 & 1) == 0) {
            FUN_00305050(lVar1);
            FUN_00305050(param_2 + 0x7e8);
            *(undefined1 *)(param_2 + 0x203) = 1;
          }
          else {
            if (*(long *)(param_2 + 0x808) != 0) {
              bVar3 = true;
              *(undefined1 *)(param_2 + 0xb38) = 1;
            }
            if ((char)local_40 != '\0') {
              FUN_005a2be0(*(undefined8 *)(param_2 + 0xc88));
              *(undefined8 *)(param_2 + 0xc88) = 0;
              cVar2 = *(char *)(param_2 + 0x201);
              goto joined_r0x0059ada8;
            }
          }
          cVar2 = *(char *)(param_2 + 0x201);
          goto joined_r0x0059ada8;
        }
        if (4 < uVar6) {
          uVar6 = 5;
        }
        FUN_003057a0(lVar1,uVar6,param_2 + 0x7e8);
        if (*(long *)(param_2 + 0x808) != 0) {
          bVar3 = true;
          *(undefined1 *)(param_2 + 0xb38) = 1;
          cVar2 = *(char *)(param_2 + 0x201);
          goto joined_r0x0059ada8;
        }
      }
      bVar3 = false;
      cVar2 = *(char *)(param_2 + 0x201);
      goto joined_r0x0059ada8;
    }
    bVar3 = false;
  }
  cVar2 = *(char *)(param_2 + 0x201);
joined_r0x0059ada8:
  if (((cVar2 != '\0') && (!bVar3 && *(long *)(param_2 + 0x6c8) == 0)) &&
     (*(long *)(param_2 + 0x1c0) != 0)) {
    FUN_003d5e40(param_2 + 0x1d0,*(undefined8 *)(param_2 + 0x1c8));
    *(undefined8 *)(param_2 + 0x1c8) = 0;
    FUN_005b39d0(param_2 + 0x468,*(undefined8 *)(param_2 + 0x1b8));
    uVar5 = *(undefined8 *)(param_2 + 0x1c0);
    *(undefined8 *)(param_2 + 0x1c0) = 0;
    local_40 = 
    "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc";
    local_38 = 0x49d;
    FUN_002f019c(&local_40,uVar5,0);
  }
  return;
}


