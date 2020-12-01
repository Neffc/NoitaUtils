
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00a5fca0(char *param_1,double *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  code *pcVar5;
  undefined4 *puVar6;
  uint uVar7;
  code *pcVar8;
  int **in_FS_OFFSET;
  double dVar9;
  undefined local_94 [4];
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined local_7c;
  undefined4 local_78;
  undefined4 local_74;
  char local_67;
  uint local_4c;
  void *local_48;
  double *local_44;
  void *local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  char local_2d;
  void *local_2c [3];
  undefined4 *local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int *local_10;
  undefined *puStack12;
  undefined4 local_8;
  
  puStack12 = &LAB_00c9e61c;
  local_10 = *in_FS_OFFSET;
  local_14 = DAT_00e0b000 ^ (uint)&stack0xfffffffc;
  *(int ***)in_FS_OFFSET = &local_10;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_8 = 0;
  local_44 = param_2;
  FUN_00b4fb60(param_2,&local_3c,local_14);
  FUN_00b4fb60(param_2,&local_3c);
  FUN_00b42330();
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  if (*param_1 == '\0') {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = pcVar3 + -(int)(param_1 + 1);
  }
  FUN_0041da50(param_1,pcVar3);
  pcVar5 = operator_new_exref;
  local_8._0_1_ = 1;
  if (DAT_00e5474c == 0) {
    local_40 = operator_new(0x198);
    local_8._0_1_ = 2;
    if (local_40 == (void *)0x0) {
      DAT_00e5474c = 0;
    }
    else {
      DAT_00e5474c = FUN_005bc800();
    }
  }
  local_8._0_1_ = 1;
  local_40 = (void *)FUN_0066ed20(local_2c);
  pcVar8 = operator_delete_exref;
  local_8._0_1_ = 0;
  if (0xf < local_18) {
    operator_delete(local_2c[0]);
  }
  iVar4 = (local_38 - local_3c) / 6 + (local_38 - local_3c >> 0x1f);
  if ((uint)((iVar4 >> 2) - (iVar4 >> 0x1f)) < 3) goto LAB_00a5fffd;
  FUN_00786300(3);
  local_8._0_1_ = 3;
  uVar7 = 0;
  local_4c = local_1c - (int)local_20 >> 2;
  local_2d = '\x01';
  iVar4 = local_3c;
  puVar6 = local_20;
  if (local_4c == 0) {
LAB_00a5fea8:
    FUN_00487fe0();
    local_8c = *puVar6;
    local_88 = puVar6[1];
    local_78 = puVar6[2];
    local_84 = local_40;
    local_80 = local_40;
    local_74 = local_40;
    local_7c = 1;
    iVar4 = (int)*local_44 * 0x41a7 + ((int)*local_44 / 0x1f31d) * -0x7fffffff;
    if (iVar4 < 1) {
      iVar4 = iVar4 + 0x7fffffff;
    }
    dVar9 = (double)iVar4;
    *local_44 = dVar9;
    local_90 = (10 - (int)(dVar9 * -0.00000000 * 91.00000000)) * 100;
    iVar4 = (int)dVar9 * 0x41a7 + ((int)dVar9 / 0x1f31d) * -0x7fffffff;
    if (iVar4 < 1) {
      iVar4 = iVar4 + 0x7fffffff;
    }
    *local_44 = (double)iVar4;
    local_67 = '\x0f' - (char)(int)((double)iVar4 * -0.00000000 * 11.00000000);
    if (DAT_00e5474c == 0) {
      local_48 = (void *)(*pcVar5)(0x198);
      local_8._0_1_ = 5;
      if (local_48 == (void *)0x0) {
        DAT_00e5474c = 0;
      }
      else {
        DAT_00e5474c = FUN_005bc800();
      }
      local_8._0_1_ = 3;
    }
    FUN_0066ff30(local_94);
  }
  else {
    do {
      if (DAT_00e5474c == 0) {
        local_48 = operator_new(0x198);
        local_8._0_1_ = 4;
        if (local_48 == (void *)0x0) {
          DAT_00e5474c = 0;
        }
        else {
          DAT_00e5474c = FUN_005bc800();
        }
        local_8._0_1_ = 3;
      }
      iVar2 = FUN_0066ed20(iVar4);
      puVar6[uVar7] = iVar2;
      if (iVar2 < 1) {
        FUN_007f9b20("WorldStateSystem - couldn\'t find material: ");
        FUN_005bbf40(iVar4);
        FUN_0043c9f0(&DAT_00cd4620);
        local_2d = '\0';
        puVar6 = local_20;
      }
      uVar7 = uVar7 + 1;
      iVar4 = iVar4 + 0x18;
    } while (uVar7 < local_4c);
    pcVar5 = operator_new_exref;
    if (local_2d != '\0') goto LAB_00a5fea8;
  }
  pcVar8 = operator_delete_exref;
  if (local_20 != (undefined4 *)0x0) {
    operator_delete(local_20);
  }
LAB_00a5fffd:
  iVar4 = local_3c;
  if (local_3c != 0) {
    FUN_00438450(local_3c,local_38);
    (*pcVar8)(iVar4);
  }
  *in_FS_OFFSET = local_10;
  FUN_00c1805a();
  return;
}

