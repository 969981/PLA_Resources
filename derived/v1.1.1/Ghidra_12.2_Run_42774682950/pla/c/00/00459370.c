/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00459370; name: FUN_00459370
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00459370(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  size_t sVar4;
  undefined1 *puVar5;
  char acStack_148 [8];
  char local_140 [256];
  undefined8 local_38;
  
  local_38 = param_3;
  switch(*param_2) {
  case 0:
    pcVar3 = "othername";
    goto LAB_0045943c;
  case 1:
    iVar1 = thunk_FUN_0044be00("email",*(undefined8 *)(*(long *)(param_2 + 2) + 8),&local_38);
    break;
  case 2:
    iVar1 = thunk_FUN_0044be00(&DAT_03918c3e,*(undefined8 *)(*(long *)(param_2 + 2) + 8),&local_38);
    break;
  case 3:
    pcVar3 = "X400Name";
    goto LAB_0045943c;
  case 4:
    lVar2 = FUN_0044b740(*(undefined8 *)(param_2 + 2),local_140,0x100);
    if (lVar2 == 0) {
      return 0;
    }
    iVar1 = FUN_0044be00("DirName",local_140,&local_38);
    break;
  case 5:
    pcVar3 = "EdiPartyName";
LAB_0045943c:
    iVar1 = FUN_0044be00(pcVar3,"<unsupported>",&local_38);
    break;
  case 6:
    iVar1 = thunk_FUN_0044be00(&DAT_03971aa8,*(undefined8 *)(*(long *)(param_2 + 2) + 8),&local_38);
    break;
  case 7:
    puVar5 = *(undefined1 **)(*(int **)(param_2 + 2) + 2);
    iVar1 = **(int **)(param_2 + 2);
    if (iVar1 == 0x10) {
      local_140[0] = '\0';
      FUN_00403120(acStack_148,5,&DAT_038c8d79,CONCAT11(*puVar5,puVar5[1]));
      strcat(local_140,acStack_148);
      sVar4 = strlen(local_140);
      (local_140 + sVar4)[0] = ':';
      (local_140 + sVar4)[1] = '\0';
      FUN_00403120(acStack_148,5,&DAT_038c8d79,CONCAT11(puVar5[2],puVar5[3]));
      strcat(local_140,acStack_148);
      sVar4 = strlen(local_140);
      (local_140 + sVar4)[0] = ':';
      (local_140 + sVar4)[1] = '\0';
      FUN_00403120(acStack_148,5,&DAT_038c8d79,CONCAT11(puVar5[4],puVar5[5]));
      strcat(local_140,acStack_148);
      sVar4 = strlen(local_140);
      (local_140 + sVar4)[0] = ':';
      (local_140 + sVar4)[1] = '\0';
      FUN_00403120(acStack_148,5,&DAT_038c8d79,CONCAT11(puVar5[6],puVar5[7]));
      strcat(local_140,acStack_148);
      sVar4 = strlen(local_140);
      (local_140 + sVar4)[0] = ':';
      (local_140 + sVar4)[1] = '\0';
      FUN_00403120(acStack_148,5,&DAT_038c8d79,CONCAT11(puVar5[8],puVar5[9]));
      strcat(local_140,acStack_148);
      sVar4 = strlen(local_140);
      (local_140 + sVar4)[0] = ':';
      (local_140 + sVar4)[1] = '\0';
      FUN_00403120(acStack_148,5,&DAT_038c8d79,CONCAT11(puVar5[10],puVar5[0xb]));
      strcat(local_140,acStack_148);
      sVar4 = strlen(local_140);
      (local_140 + sVar4)[0] = ':';
      (local_140 + sVar4)[1] = '\0';
      FUN_00403120(acStack_148,5,&DAT_038c8d79,CONCAT11(puVar5[0xc],puVar5[0xd]));
      strcat(local_140,acStack_148);
      sVar4 = strlen(local_140);
      (local_140 + sVar4)[0] = ':';
      (local_140 + sVar4)[1] = '\0';
      FUN_00403120(acStack_148,5,&DAT_038c8d79,CONCAT11(puVar5[0xe],puVar5[0xf]));
      strcat(local_140,acStack_148);
    }
    else {
      if (iVar1 != 4) {
        iVar1 = FUN_0044be00("IP Address","<invalid>",&local_38);
        break;
      }
      FUN_00403120(local_140,0x100,"%d.%d.%d.%d",*puVar5,puVar5[1],puVar5[2],puVar5[3]);
    }
    iVar1 = FUN_0044be00("IP Address",local_140,&local_38);
    break;
  case 8:
    FUN_00409690(local_140,0x100,*(undefined8 *)(param_2 + 2));
    iVar1 = FUN_0044be00("Registered ID",local_140,&local_38);
    break;
  default:
    goto switchD_004593a4_default;
  }
  if (iVar1 == 0) {
    local_38 = 0;
  }
  else {
switchD_004593a4_default:
  }
  return local_38;
}


