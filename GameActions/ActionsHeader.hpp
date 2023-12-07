
#ifndef GAME_ACTIONS_H
#define GAME_ACTIONS_H

#include "../MainHeaders/Action.hpp"

class Action_SummonMonster : public Action {
public:
    Action_SummonMonster(State* previousState);
    ~Action_SummonMonster();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_FathersAbility : public Action {
public:
    Action_FathersAbility(State* previousState);
    ~Action_FathersAbility();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_PastorsAbility : public Action {
public:
    Action_PastorsAbility(State* previousState);
    ~Action_PastorsAbility();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_JournalistsAbility : public Action {
public:
    Action_JournalistsAbility(State* previousState);
    ~Action_JournalistsAbility();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_DebtCollectorsAbility : public Action {
public:
    Action_DebtCollectorsAbility(State* previousState);
    ~Action_DebtCollectorsAbility();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_StudentsAbility : public Action {
public:
    Action_StudentsAbility(State* previousState);
    ~Action_StudentsAbility();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_VeteransAbility : public Action {
public:
    Action_VeteransAbility(State* previousState);
    ~Action_VeteransAbility();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_HuskAttack : public Action {
public:
    Action_HuskAttack(State* previousState);
    ~Action_HuskAttack();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_CherubAttack : public Action {
public:
    Action_CherubAttack(State* previousState);
    ~Action_CherubAttack();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_MassesAttack : public Action {
public:
    Action_MassesAttack(State* previousState);
    ~Action_MassesAttack();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_IndulgentAttack : public Action {
public:
    Action_IndulgentAttack(State* previousState);
    ~Action_IndulgentAttack();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_RingmasterAttack : public Action {
public:
    Action_RingmasterAttack(State* previousState);
    ~Action_RingmasterAttack();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_GroomAttack : public Action {
public:
    Action_GroomAttack(State* previousState);
    ~Action_GroomAttack();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_MedicalWardAction : public Action {
public:
    Action_MedicalWardAction(State* previousState);
    ~Action_MedicalWardAction();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_SecurityRoomAction : public Action {
public:
    Action_SecurityRoomAction(State* previousState);
    ~Action_SecurityRoomAction();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_YardAction : public Action {
public:
    Action_YardAction(State* previousState);
    ~Action_YardAction();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_JunkDiscard : public Action {
public:
    Action_JunkDiscard(State* previousState);
    ~Action_JunkDiscard();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_JunkRecover : public Action {
public:
    Action_JunkRecover(State* previousState);
    ~Action_JunkRecover();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_MedkitHeal : public Action {
public:
    Action_MedkitHeal(State* previousState);
    ~Action_MedkitHeal();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_MedkitRevive : public Action {
public:
    Action_MedkitRevive(State* previousState);
    ~Action_MedkitRevive();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_Dilemma_ExtraDamage : public Action {
public:
    Action_Dilemma_ExtraDamage(State* previousState);
    ~Action_Dilemma_ExtraDamage();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_Dilemma_SummonMonster : public Action {
public:
    Action_Dilemma_SummonMonster(State* previousState);
    ~Action_Dilemma_SummonMonster();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_Dilemma_Hunger : public Action {
public:
    Action_Dilemma_Hunger(State* previousState);
    ~Action_Dilemma_Hunger();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_Dilemma_PainSplit : public Action {
public:
    Action_Dilemma_PainSplit(State* previousState);
    ~Action_Dilemma_PainSplit();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_Dilemma_DiscardAll : public Action {
public:
    Action_Dilemma_DiscardAll(State* previousState);
    ~Action_Dilemma_DiscardAll();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_MovePatient : public Action {
public:
    Action_MovePatient(State* previousState);
    ~Action_MovePatient();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_GiveResource : public Action {
public:
    Action_GiveResource(State* previousState);
    ~Action_GiveResource();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_DrawCard : public Action {
public:
    Action_DrawCard(State* previousState);
    ~Action_DrawCard();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_RecoverDilemma : public Action {
public:
    Action_RecoverDilemma(State* previousState);
    ~Action_RecoverDilemma();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_MoveMonster : public Action {
public:
    Action_MoveMonster(State* previousState);
    ~Action_MoveMonster();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

class Action_ExtraAction : public Action {
public:
    Action_ExtraAction(Action* actionType, State* previousState);
    ~Action_ExtraAction();
    void stateRender(GameController* game);
    void actionEffects(GameController* game);
};

#endif