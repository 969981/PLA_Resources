/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01209d00; name: FUN_01209d00
 */


void FUN_01209d00(undefined4 *param_1,long param_2)

{
  ulong uVar1;
  char local_80 [8];
  char local_78 [4];
  undefined4 local_74;
  char local_70;
  undefined1 auStack_6c [20];
  char local_58;
  undefined8 local_50;
  char local_48;
  undefined8 local_44;
  undefined8 local_3c;
  
  if (*(char *)(param_2 + 0x288) == '\0') {
    if (*(uint *)(param_2 + 0xb0) < 5) {
switchD_01209e44_caseD_0:
      FUN_0120977c(local_80,0);
      if (local_80[0] != '\0') {
LAB_01209d60:
        *param_1 = 1;
        *(undefined1 *)(param_1 + 2) = 0;
        *(undefined1 *)(param_1 + 4) = 0;
        if (local_78[0] == '\0') goto LAB_01209d84;
        param_1[5] = local_74;
LAB_01209d80:
        *(undefined1 *)(param_1 + 4) = 1;
LAB_01209d84:
        *(undefined1 *)(param_1 + 6) = 0;
        if (local_70 != '\0') {
          FUN_007ee578(param_1 + 7,auStack_6c);
          *(undefined1 *)(param_1 + 6) = 1;
        }
        *(undefined1 *)(param_1 + 0xc) = 0;
        if (local_58 != '\0') {
          *(undefined8 *)(param_1 + 0xe) = local_50;
          *(undefined1 *)(param_1 + 0xc) = 1;
        }
        *(undefined1 *)(param_1 + 0x10) = 0;
        if (local_48 != '\0') {
          *(undefined8 *)(param_1 + 0x11) = local_44;
          *(undefined1 *)(param_1 + 0x10) = 1;
        }
        *(undefined8 *)(param_1 + 0x13) = local_3c;
        *(undefined1 *)(param_1 + 2) = 1;
        if (local_80[0] == '\0') {
          return;
        }
        FUN_02727c1c(local_78);
        return;
      }
      uVar1 = FUN_0120994c();
      if ((uVar1 & 1) != 0) {
        *param_1 = 3;
        goto LAB_01209d24;
      }
    }
    else if (*(uint *)(param_2 + 0xb0) == 5) {
      switch(*(undefined4 *)(param_2 + 0xb4)) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 8:
        goto switchD_01209e44_caseD_0;
      case 6:
      case 7:
        FUN_0120977c(local_80,1);
        if (local_80[0] != '\0') {
          *param_1 = 1;
LAB_01209e64:
          *(undefined1 *)(param_1 + 2) = 0;
          *(undefined1 *)(param_1 + 4) = 0;
          if (local_78[0] == '\0') goto LAB_01209d84;
          param_1[5] = local_74;
          goto LAB_01209d80;
        }
        break;
      case 9:
        uVar1 = FUN_027d9ea0(*(undefined8 *)(param_2 + 0x270));
        if ((uVar1 & 1) == 0) {
          FUN_0120977c(local_80,1);
          if (local_80[0] != '\0') {
            FUN_027d9e90(*(undefined8 *)(param_2 + 0x270));
            *param_1 = 1;
            goto LAB_01209e64;
          }
        }
        else {
          FUN_0120977c(local_80,1);
          if (local_80[0] != '\0') {
            *(undefined1 *)(param_1 + 2) = 0;
            *param_1 = 2;
            FUN_02727c1c(local_78);
            return;
          }
        }
        break;
      case 0xd:
        FUN_0120977c(local_80,0);
        if (local_80[0] != '\0') goto LAB_01209d60;
      }
    }
  }
  *param_1 = 0;
LAB_01209d24:
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}


